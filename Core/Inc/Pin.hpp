/*
 * Pin.h
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#ifndef SRC_PIN_H_
#define SRC_PIN_H_

#include <Port.hpp>

namespace stm32 {

class Pin : public Port {
protected:
	uint16_t pin;

public:
	Pin();
	Pin(uint16_t p);
	Pin(GPIO_TypeDef* pt, uint16_t pn);
	virtual ~Pin();
	void setPin(uint16_t p);
	uint16_t getPin();
	void writePin(State pv);
	void togglePin();
	State readPin();
	virtual void operator =(State pv); // Write Pin
	virtual void operator !(); // Toggle Pin
	State operator ~(); // Read Pin
};

} /* namespace stm32 */

#endif /* SRC_PIN_H_ */
