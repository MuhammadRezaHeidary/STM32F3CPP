/*
 * PinList.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#include <PinList.hpp>

namespace stm32 {

PinList::PinList() {}

PinList::PinList(Pin* map) {
	setPinMap(map);
}

PinList::PinList(Pin* map, int size) {
	setPinMap(map);
	setSizeMap(size);
}

void PinList::setPinMap(Pin* map) {
	this->pinMap = map;
}

Pin* PinList::getPinMap() {
	return this->pinMap;
}

void PinList::setSizeMap(int size) {
	this->sizeMap = size;
}

int PinList::getSizeMap() {
	return this->sizeMap;
}

void PinList::writeMap(State* s) {
	for(int i = 0; i < this->getSizeMap(); i++) {
		this->getPinMap()[i].writePin(s[i]);
	}
}

void PinList::operator =(State* s) {
	this->writeMap(s);
}

void PinList::toggleMap() {
	for(int i = 0; i < this->getSizeMap(); i++) {
		this->getPinMap()[i].togglePin();
	}
}

void PinList::operator !() {
	this->toggleMap();
}

State* PinList::readMap() {
	State *s = new State[this->getSizeMap()] {};
	for(int i = 0; i < this->getSizeMap(); i++) {
		s[i] = this->getPinMap()[i].readPin();
	}
	return s;
//	delete[] s;
}

State* PinList::operator ~() {
	return this->readMap();
}

void PinList::writeMapWithKey(int key, State s) {
	this->getPinMap()[key].writePin(s);
}

void PinList::operator ()(int key, State s) {
	this->writeMapWithKey(key, s);
}

void PinList::toggleMapWithKey(int key) {
	this->getPinMap()[key].togglePin();
}

void PinList::operator !=(int key) {
	this->toggleMapWithKey(key);
}

State PinList::readMapWithKey(int key) {
	return this->getPinMap()[key].readPin();
}

State PinList::operator [](int key) {
	return this->readMapWithKey(key);
}

PinList::~PinList() {}

} /* namespace mrh */
