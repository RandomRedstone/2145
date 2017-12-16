#ifndef SRC_CONTROLLER_H_
#define SRC_CONTROLLER_H_

#include <Joystick.h>
#include "Reference.h"

using frc::Joystick;

namespace Team {

class Controller {
public:
	Controller(unsigned int port);
	// Returns the float value of a trigger or joystick
	float getAxis(unsigned int ID);
	// Returns the boolean value of a button
	bool getButton(unsigned int ID);
	// Return the type of controller
	Reference::controllerType getType();
	// Run to update the button and joystick values
	void updateController();
private:
	Joystick controller;
	bool buttons [];
	float axis [];
};

}

#endif
