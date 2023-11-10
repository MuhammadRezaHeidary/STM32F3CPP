/*
 * Port.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#include <Port.hpp>

namespace stm32 {


Port::Port() {}


Port::Port(GPIO_TypeDef* p) {
	setPort(p);
}

void Port::setPort(GPIO_TypeDef* p) {
	this->port = p;
}

GPIO_TypeDef* Port::getPort() {
	return this->port;
}

void Port::operator =(uint16_t pv) {
	this->getPort()->BSRR = (uint32_t)((~pv << GPIO_PIN_NUMBER) + pv);
}

void Port::operator !() {
	this->getPort()->BSRR = ((this->getPort()->ODR & GPIO_PIN_ALL) << GPIO_PIN_NUMBER) | (~(this->getPort()->ODR) & GPIO_PIN_ALL);
}

void Port::operator !=(uint16_t pv) {
	this->getPort()->BSRR = ((this->getPort()->ODR & pv) << GPIO_PIN_NUMBER) | (~(this->getPort()->ODR) & pv);
}

State Port::operator [](uint8_t index) {
	try {
		if(index < GPIO_PIN_NUMBER) {
			return ((this->getPort()->IDR & ((uint32_t)(1 << index))) ? State::Set : State::Reset);
		}
		else {
			throw (index);
		}
	}
	catch (...) {
		return State::Reset;
	}
}

uint16_t Port::operator ~() {
	return (uint16_t)(this->getPort()->IDR);
}

Port::~Port() {}

} /* namespace mrh */
