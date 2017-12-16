#include "Robot.h"
#include "Reference.h"
#include "Drive.h"

#include <TalonSRX.h>

#include <iostream>
#include <ctrlib/CanTalonSrx.h>
using frc;

namespace Team {

// Run during initialization to initialize drive motors
void DriveTrain::getDriveMotors(){
	unsigned int motorList [] = Reference::driveMotorList;
	for(unsigned int index = 0; index < sizeof(motorList); index++){
		DriveTrain::motors[index] = new CanTalonSRX(motorList[index]);
	}
	// Debug print statement
	std::cout << "Motors Initialized" << std::endl;
}
void DriveTrain::joystickDrive(){
	int driver, lstickx, lsticky = Team::Reference::Driver, Team::Reference::LStickX, Team::Reference::LStickY;
	float Lx = Team::getAxis(driver, lstickx);
	float Ly = Team::getAxis(driver, lsticky);
}
void DriveTrain::TestDrive(){
	float rTrigger = Team::getAxis(0,5);
	float lTrigger = Team::getAxis(0,4);
	// setting up the triggers
	if(rTrigger == 1) {
		Team::Drive(1.0f,1.0f);
	}
	if(lTrigger == 1) {
		Team::Drive(-1.0f,-1.0f);
	}
}
void DriveTrain::Drive(float left, float right){
	DriveTrain::motors[0].Set(left);
	DriveTrain::motors[1].Set(right);
}
void DriveTrain::run(){
	joystickDrive();
}
}
