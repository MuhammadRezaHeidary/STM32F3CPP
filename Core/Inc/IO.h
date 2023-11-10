/*
 * IO.h
 *
 *  Created on: Nov 7, 2023
 *      Author: muham
 */

#ifndef SRC_IO_H_
#define SRC_IO_H_

#include "stm32f3xx_hal.h"
#include "Electronics.h"

namespace mrh32 {

/* namespace : stm32
 * Class Inheritance:
 * Peripheral -> GPIO -> Port -> Pin -> PinList
 * Peripheral -> UART -> Serial -> Transmit/Receive
 */

class IO {
private:
	GPIO_TypeDef* port;
	uint16_t pin = GPIO_PIN_0;
	State state;

public:
	IO();
	virtual ~IO();
	void setPort(GPIO_TypeDef* p);
	GPIO_TypeDef* getPort();
	void setPin(uint16_t p);
	uint16_t getPin();
	void setState(State p);
	State getState();
	void operator =(State s); // Write Pin
	void operator =(State* s); // Write Port
	void operator ~(); // Toggle Pin
	void operator !(); // Read Pin


};

} /* namespace mrh */

#endif /* SRC_IO_H_ */
