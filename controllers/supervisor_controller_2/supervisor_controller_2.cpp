#include <webots/Supervisor.hpp>

#define TIME_STEP 32

// All the webots classes are defined in the "webots" namespace
using namespace webots;

int main(int argc, char **argv) {

  Supervisor *robot = new Supervisor(); // create Supervisor instance
  Node *bb8Node = robot->getFromDef("BB-8");
  Field *translationField = bb8Node->getField("translation");
  // [CODE PLACEHOLDER 1]
  
  int i = 0;
    if (i == 0) {
        const double newValue[3] = {2.5, 0, 0};
        translationField->setSFVec3f(newValue);
      }
    i++;
    
    
  while (robot->step(TIME_STEP) != -1) {
  
  }

  //delete robot;
  return 0;
}