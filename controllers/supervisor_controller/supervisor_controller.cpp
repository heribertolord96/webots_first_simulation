#include <webots/Supervisor.hpp>

#define TIME_STEP 32

// All the webots classes are defined in the "webots" namespace
using namespace webots;

int main(int argc, char **argv) {

  Supervisor *robot = new Supervisor(); // create Supervisor instance

  // [CODE PLACEHOLDER 1]
  Node *bb8Node = robot->getFromDef("BB-8");
  Field *translationField = bb8Node->getField("translation");

  Node *rootNode = robot->getRoot();
  Field *childrenField = rootNode->getField("children");

  childrenField->importMFNode(-1, "custom_ball.wbo");
  Node *ballNode = robot->getFromDef("BALL");
  Node *appearanceNode = robot->getFromDef("SPHERE_COLOR");
  Field *colorField = appearanceNode->getField("baseColor");

  int i = 0;
  while (robot->step(TIME_STEP) != -1) {
    // [CODE PLACEHOLDER 2]
    if (i == 0) {
      const double newValue[3] = {0, 0, 2.5};
      translationField->setSFVec3f(newValue);
    }

    if (i == 10)
      bb8Node->remove();

    if (i == 20)
      childrenField->importMFNodeFromString(-1, "Nao { }");

    const double *position = ballNode->getPosition();
    std::cout << "Ball position: " << position[0] << " " << position[1] << " " << position[2] << std::endl;

    if (position[1] < 0.2) {
      const double redColor[3] = {1, 0, 0};
      colorField->setSFColor(redColor);
    }

    i++;
  }

  delete robot;

  return 0;
}