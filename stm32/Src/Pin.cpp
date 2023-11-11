/*
 * Pin.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#include <Pin.hpp>

namespace stm32 {

Pin::Pin() {
	// TODO Auto-generated constructor stub

}

Pin::Pin(uint16_t p) {
	setPin(p);
}

Pin::Pin(GPIO_TypeDef* pt, uint16_t pn) {
	setPort(pt);
	setPin(pn);
}

void Pin::setPin(uint16_t p) {
	this->pin = p;
}

uint16_t Pin::getPin() {
	return this->pin;
}

void Pin::writePin(State pv) {
	if(pv != State::Reset) {
		this->getPort()->BSRR = (uint32_t)(this->getPin());
	}
	else {
		this->getPort()->BRR = (uint32_t)(this->getPin());
	}
}

void Pin::operator =(State pv) {
	this->writePin(pv);
}

void Pin::togglePin() {
	this->getPort()->BSRR = ((this->getPort()->ODR & this->getPin()) << GPIO_PIN_NUMBER) | (~(this->getPort()->ODR) & this->getPin());
}

void Pin::operator !() {
	this->togglePin();
}

State Pin::readPin() {
	return (this->getPort()->IDR & this->getPin() ? State::Set : State::Reset);
}

State Pin::operator ~() {
	return this->readPin();
}

Pin::~Pin() {
	// TODO Auto-generated destructor stub
}

} /* namespace mrh */
