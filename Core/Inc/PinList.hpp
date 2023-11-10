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

typedef struct PinPair {
	string key;
	Pin pin;
	static int size = 0;
} PinPair;

class PinList {
private:
	PinPair* pinMap;

public:
	PinList();
	PinList(PinPair* map);
	virtual ~PinList();
	void setPinMap(PinPair* map);
	PinPair* getPinMap();
	void operator =(PinPair* map); // Write Map
	void operator !(); // Toggle Map.
	void operator ()(string key, State s); // Write Map key
	void operator !=(string key); // Toggle Map with a key
	State operator [](string key); // Read Map for a pin
};

} /* namespace stm32 */

#endif /* SRC_PINLIST_H_ */
