#ifndef __ACTI_1_H_
#define __ACTI_1_H_
/**
 * @file acti1.h
 * @author HARSHITHA
 * @brief Header file for acti1
 
 * 
 */


/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void init_peripheral(void);

/**
 * @brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief Acti 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int acti1_LED(void);

#endif /* __ACTI_1_H_ */