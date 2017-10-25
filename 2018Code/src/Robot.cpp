#include <iostream>

#include <IterativeRobot.h>

#include "Robot.h"
#include "Reference.h"

namespace Team {

void Robot::RobotInit() {
	// Create new OI class
	Robot::oi = Team::OI();
	// Create new DriveTrain class
	Robot::drivetrain = Team::DriveTrain();
}
void AutonomousInit(){

}
void AutonomousPeriodic() {

}
void TeleopInit() {

}
void TeleopPeriodic() {

}
void TestPeriodic() {

}
bool getButton(int id, int button){
	// Update controller's data
	Robot::oi.controllers[id].updateController();
	// Return value
	return Robot::oi.controllers[id].buttons[button];
}
float getAxis(int id, int axis){
	// Update controller's data
	Robot::oi.controllers[id].updateController();
	// Return value
	return Robot::oi.controllers[id].axis[axis];
}
}
