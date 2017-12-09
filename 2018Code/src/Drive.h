#ifndef __DRIVE_H_INCLUDE__
#define __DRIVE_H_INCLUDE__

#include <ctrlib/CanTalonSRX.h>
#include "Reference.h"

namespace Team {

class DriveTrain{
public:
	// Call during teleop to execute all periodic functions
	void run();
private:
	// Main drive Motors
	frc::CanTalonSRX motors [4];
	// Call during initialization to get the drive motor objects
	void getDriveMotors();
	// Call during teleop periodic to drive using tank controls
	void tankDrive();
	// Call during teleop periodic to drive using joystick controls
	void joystickDrive();
	// Call to change motor speeds
	void drive(float left, float right);
};

}
#endif
