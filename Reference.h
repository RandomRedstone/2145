#ifndef __REF_H_INCLUDE__
#define __REF_H_INCLUDE__

namespace Team {

class Reference {
	// A type for percentages
	typedef unsigned short int perc;
	// A type for ID numbers
	typedef const unsigned short int ID;
	// An enum for controller types
	enum controllerType {
		XBOX = 0,
		ATTACK = 1,
		NONE = 2
	};
	// An enum for XBOX buttons
	enum XBOX_Buttons {
		A = 0,
		B,
		X,
		Y,
		LBumper,
		RBumper,
		Start,
		Back,
		LStick,
		RStick
	};
	// An enum for XBOX axis
	enum XBOX_Axis {
		LStickX = 0,
		LStickY,
		RStickX,
		RStickY,
		LTrigger,
		RTrigger
	};
	// An enum for ATTACK axis
	enum ATTACK_Axis {
		JoystickX = 0,
		JoystickY,
		Volume
	};
	// An enum for controller ID numbers
	enum ControllerID {
		Driver = 0,
		Passenger
	};
private:
	// The percentage of power given through raw calculation to give to the motors
	perc totalWheelPower = 100;
	// The percentage of power given to the individual wheels (multiplied by totalWheelPower) 0 = Left, 1 = Right
	perc wheelPowers [] = {100,100};
public:
	// The drive motors' ID numbers. 0 = FL, 1 = FR, 2 = BL, 3 = BR
	ID driveMotorList [4] = {31,32,10,11};
	// A method to return the total wheel power in decimal format
	unsigned float getTotalWheelPower();
	// A method to return the wheel powers of the individual wheels in decimal format. 0 = left, 1 = right.
unsigned float getWheelPower(unsigned int side);
};

}

#endif
