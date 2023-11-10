/*
 * PinList.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#include <PinList.hpp>

namespace stm32 {

PinList::PinList() {}

PinList::PinList(PinPair* map) {
	setPinMap(map);
}

void PinList::setPinMap(PinPair* map) {
	this->pinMap = map;
}

PinPair* PinList::getPinMap() {
	return this->pinMap;
}

void PinList::operator ()(string key, State s) {

}

//void PinList::operator =(PinPair* map); // Write Map
//void PinList::operator !(); // Toggle Map.
//void PinList::operator !=(string key); // Toggle Map with a key

PinList::~PinList() {}

} /* namespace mrh */
