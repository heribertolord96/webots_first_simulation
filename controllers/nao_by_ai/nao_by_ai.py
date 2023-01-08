import webots

# Constante para el tiempo de paso del controlador
TIME_STEP = 64

# Clase principal del controlador
class NaoController:
  def __init__(self):
    # Obtener una instancia del robot
    self.robot = webots.Robot()
    
    # Obtener motores y sensores del robot
    self.motors = [self.robot.getMotor(name) for name in ['LHipPitch', 'LKneePitch', 'LAnklePitch', 'RHipPitch', 'RKneePitch', 'RAnklePitch', 'LHipYawPitch', 'RHipYawPitch']]
    self.sensors = [self.robot.getPositionSensor(name) for name in ['LHipPitch', 'LKneePitch', 'LAnklePitch', 'RHipPitch', 'RKneePitch', 'RAnklePitch', 'LHipYawPitch', 'RHipYawPitch']]
    
    # Habilitar los motores y sensores
    for motor in self.motors:
      motor.enablePosition(TIME_STEP)
    for sensor in self.sensors:
      sensor.enable(TIME_STEP)
      
    # Establecer la posición inicial del robot
    self.set_initial_position()
  
  # Establecer la posición inicial del robot
  def set_initial_position(self):
    # Establecer las posiciones de los motores en cero
    for motor, sensor in zip(self.motors, self.sensors):
      motor.setPosition(sensor.getValue())
      
  # Función principal del controlador
  def run(self):
    # Bucle principal
    while self.robot.step(TIME_STEP) != -1:
      # Obtener la lectura de los sensores de posición
      sensor_values = [sensor.getValue() for sensor in self.sensors]
      
      # Establecer la posición de los motores según los valores de los sensores
      for motor, value in zip(self.motors, sensor_values):
        motor.setPosition(value)
        
# Crear una instancia del controlador y ejecutar el bucle principal
controller = NaoController()
controller.run()
