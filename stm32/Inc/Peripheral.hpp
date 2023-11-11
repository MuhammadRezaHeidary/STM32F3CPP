/*
 * Peripheral.h
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#ifndef SRC_PERIPHERAL_H_
#define SRC_PERIPHERAL_H_

#include "main.h"
//#include "stm32f1xx_hal.h"
//#include "stm32f3xx_hal.h"
#include "Electronics.h"

namespace stm32 {

/* namespace : stm32
 * Class Inheritance:
 * Peripheral -> GPIO -> Port -> Pin -> PinList
 * Peripheral -> UART -> Serial -> Transmit/Receive
 */

class Peripheral {
public:
	Peripheral();
	virtual ~Peripheral();
};

} /* namespace stm32 */

#endif /* SRC_PERIPHERAL_H_ */
