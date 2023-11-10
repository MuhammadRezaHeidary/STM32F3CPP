/*
 * PinList.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#include <PinList.hpp>

namespace stm32 {

PinList::PinList() {}

PinList::PinList(unordered_map<string, Pin> umap) {
	setPinMap(umap);
}

void PinList::setPinMap(unordered_map<string, Pin> umap) {
	this->pinMap = umap;
}

unordered_map<string, Pin> PinList::getPinMap() {
	return this->pinMap;
}

//void operator =(unordered_map<string, Pin> umap); // Write Map

void PinList::operator ()(string key, State s) {
	try {
		if(this->getPinMap().find(key) == this->getPinMap().end()) {
			throw (key);
		}
		else {
			this->getPinMap()[key] = State::Set;
		}
	}
	catch (...) {
		;	// TODO : insert key abd pin
	}
}

//void operator !(); // Toggle Map.
//void operator !=(string key); // Toggle Map with a key
//	State operator [](string key); // Read Map for a pin

PinList::~PinList() {}

} /* namespace mrh */
