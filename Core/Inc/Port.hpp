/*
 * Port.h
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#ifndef SRC_PORT_H_
#define SRC_PORT_H_

#include <GPIO_.hpp>

namespace stm32 {

class Port : public GPIO {
protected:
	GPIO_TypeDef* port;

public:
	Port();
	Port(GPIO_TypeDef* p);
	virtual ~Port();
	void setPort(GPIO_TypeDef* p);
	GPIO_TypeDef* getPort();
	virtual void operator =(uint16_t pv); // Write Port
	virtual void operator !(); // Toggle Port
	void operator !=(uint16_t pv); // Toggle Port with input pins
	State operator [](uint8_t index); // Read Port for a pin
	uint16_t operator ~(); // Read Port

};

} /* namespace stm32 */

#endif /* SRC_PORT_H_ */
