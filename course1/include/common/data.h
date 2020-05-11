/**
 * @file data.c
 * @brief Abstraction of memory read and write operations
 *
 * This file should do some very basic data manipulation.
 *
 * @author Mohab Ahmed
 * @date April 11 2020
 *
 */
#ifndef __DATA_H__
#define __DATA_H__
#include<stdint.h>
/**
 * @brief convert data from a standard integer type into an ASCII string.
 *
 *
 *
 * @param data Pointer to data array
 * @param ptr Index into pointer array to set value
 * @param base it can be from 2 to 16
 *
 * @return the length of the converted data
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief convert data back from an ASCII represented string into an integer type.
 *
 *
 *
 * @param ptr Pointer to data array
 * @param digits number of digits in your character
 * @param base it can be from 2 to 16
 *
 * @return the number after converting
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __DATA_H__ */