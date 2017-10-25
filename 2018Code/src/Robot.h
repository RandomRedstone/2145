#ifndef ROBOT_H_
#define ROBOT_H_

#include <IterativeRobot.h>

#include "OI.h"
#include "Drive.h"
#include "Reference.h"

namespace Team{

class Robot : public frc::IterativeRobot {
public:
	// Main instance of OI class
	Team::OI oi;
	// Main instance of DriveTrain class
	Team::DriveTrain drivetrain;
	/* Run when robot is started */
	void RobotInit();
	/* Run when autonomous is started */
	void AutonomousInit() override;
	/* Run when autonomous is enabled*/
	void AutonomousPeriodic();
	/* Run when teleoperation is started */
	void TeleopInit();
	/* Run when teleoperation is enabled */
	void TeleopPeriodic();
	/* Run when test is enabled */
	void TestPeriodic();
	/* Grab a button value from a controller */
	bool getButton(int id, int button);
	/* Grab an axis value from a controller */
	float getAxis(int id, int axis);
};

}

#endif
