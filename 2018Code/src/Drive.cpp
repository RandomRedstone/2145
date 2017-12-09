#include "Robot.h"
#include "Reference.h"
#include "Drive.h"

#include <TalonSRX.h>

#include <iostream>

using frc::TalonSRX;

namespace Team {

// Run during initialization to initialize drive motors
void DriveTrain::getDriveMotors(){
	unsigned int motorList [] = Reference::driveMotorList;
	for(unsigned int index = 0; index < 4; index++){
		DriveTrain::motors[index] = new TalonSRX(motorList[index]);
	}
	// Debug print statement
	std::cout << "Motors Initialized" << std::endl;
}
void DriveTrain::joystickDrive(){
	int driver, lstickx, lsticky = Team::Reference::Driver, Team::Reference::LStickX, Team::Reference::LStickY;
	float Lx = Team::getAxis(driver, lstickx);
	float Ly = Team::getAxis(driver, lsticky);
}
void DriveTrain::run(){
	joystickDrive();
}
void DriveTrain::drive(float left, float right){
	DriveTrain::motors[0].Set(left*Team::getTotalWheelPower()*Team::getWheelPower((unsigned int)0));
}
}
