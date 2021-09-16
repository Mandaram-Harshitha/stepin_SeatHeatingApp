#ifndef __ACTI_2_H__
#define __ACTI_2_H__
/**
 * @file acti2.h
 * @author HARSHITHA
 * @brief Header file for acti2
 
 * 
 */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize the registers for ADC setup
 * 
 */
void InitADC();

/**
 * @brief Gives the ADC values for the selected channel
 * 
 * @param[in] ch Channel number from 0-7
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Return the ADC value to main function
 * 
 * @return uint16_t The ADC value
 */
uint16_t acti2_GetADC(void);

#endif /* __ACTI_2_H__ */