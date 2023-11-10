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
#include <unordered_map>

using namespace std;

namespace stm32 {

class PinList {
protected:
	unordered_map<string, Pin> pinMap;

public:
	PinList();
	PinList(unordered_map<string, Pin> umap);
	virtual ~PinList();
	void setPinMap(unordered_map<string, Pin> umap);
	unordered_map<string, Pin> getPinMap();
	void operator =(unordered_map<string, Pin> umap); // Write Map
	void operator !(); // Toggle Map.
	void operator ()(string key, State s); // Write Map key
	void operator !=(string key); // Toggle Map with a key
//	State operator [](string key); // Read Map for a pin
};

} /* namespace stm32 */

#endif /* SRC_PINLIST_H_ */
