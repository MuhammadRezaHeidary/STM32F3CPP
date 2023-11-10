/*
 * GPIO.hpp
 *
 *  Created on: Nov 8, 2023
 *      Author: muham
 */

#ifndef SRC_GPIO_HPP_
#define SRC_GPIO_HPP_

#include <Peripheral.hpp>

#define 	GPIO_PIN_NUMBER		(16U)
#define 	GPIO_PIN_ALL		((uint16_t)0xFFFFU)

namespace stm32 {

class GPIO : public Peripheral {
public:
	GPIO();
	virtual ~GPIO();
};

} /* namespace stm32 */

#endif /* SRC_GPIO_HPP_ */
