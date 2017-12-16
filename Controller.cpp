#include "Controller.h"
#include "Joystick.h"
#include "Reference.h"

namespace Team {

Controller::Controller(unsigned int port){
	controller = new Joystick(port);
}
Reference::controllerType Controller::getType(){
	buttons = controller.GetButtonCount();
	axis = controller.GetAxisCount();
	if(buttons == 10 && axis == 6){
		return Reference::controllerType::XBOX;
	}else if(buttons == 11 && axis == 3){
		return Reference::controllerType::ATTACK;
	}else{
		return Reference::controllerType::NONE;
	}
}
float Controller::getAxis(unsigned int ID){
	return controller.GetRawAxis(ID);
}
bool Controller::getButton(unsigned int ID){
	return controller.GetRawButton(ID);
}
void Controller::updateController(){
	// Grab the values for all the buttons
	for(unsigned int button = 0; button <= sizeof(buttons); button++){
		buttons[button] = controller.GetRawButton(button);
	}
	// Grab the values for all the axis
	for(unsigned int ax = 0; ax <= sizeof(axis); ax++){
		axis[ax] = controller.GetRawAxis(ax);
	}
}

}
