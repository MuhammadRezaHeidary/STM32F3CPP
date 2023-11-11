/*
 * PinList.h
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#ifndef SRC_PINLIST_H_
#define SRC_PINLIST_H_

#include <Pin.hpp>
#include <string>

using namespace std;

namespace stm32 {

class PinList {
private:
	Pin* pinMap;
	int sizeMap;

public:
	PinList();
	PinList(Pin* map);
	PinList(Pin* map, int size);
	virtual ~PinList();
	void setPinMap(Pin* map);
	Pin* getPinMap();
	void setSizeMap(int size);
	int getSizeMap();
	void writeMap(State* s);
	void toggleMap();
	State* readMap();
	void writeMapWithKey(int key, State s);
	void toggleMapWithKey(int key);
	State readMapWithKey(int key);
	void operator =(State* s); // Write Map
	void operator !(); // Toggle Map.
	State* operator ~(); // Read Map
	void operator ()(int key, State s); // Write Map key
	void operator !=(int key); // Toggle Map with a key
	State operator [](int key); // Read Map for a key
};

} /* namespace stm32 */

#endif /* SRC_PINLIST_H_ */
