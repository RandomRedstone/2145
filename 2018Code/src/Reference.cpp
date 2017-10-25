#include <Reference.h>

namespace Team {

unsigned float getTotalWheelPower(){
	// Convert total wheel power to float to avoid rounding and divide by 100
	return (float) Reference::totalWheelPower / 100;
}
unsigned float getWheelPower(unsigned int side){
	// Convert wheel power to float to avoid rounding and divide by 100
	return (float) Reference::wheelPowers[side] / 100;
}

}
