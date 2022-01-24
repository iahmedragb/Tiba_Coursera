/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
* @file stats.h
* @brief function prototypes to print statistics of an array and reorder it in a descending order.
*
*  these prototypes of functions to analyze an array of unsigned char data items and report analytics
*  on the maximum, minimum, mean, and median of the data set.
*  In addition to reorder this data set in descending order.
*
* @author Ahmed Tiba
* @date   24-1-2022 
*
*/
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statistics of an array ( minimum,maximum, mean, and median ).
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will analyze the data set and print to screen the minimum,maximum, mean, and median.
 *  No parameters are returned from this function.
 *
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

void print_statistics(unsigned char* arr, unsigned int len);


/**
 * @brief Prints an array data to the screen
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will print the array elements based on the parameters passed to it.
 *  No parameters are returned from this function.
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

void print_array(unsigned char* arr, unsigned int len);


/**
 * @brief evaluate the median of a sorted array
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit intger.
 *  This will evaluate the value of the median directly if the array length is odd. or calculate
 *  the average of the both medians if the array length is even.
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

unsigned char find_median(unsigned char* arr, unsigned int len);


/**
 * @brief evaluate the mean of an array
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will evaluate the value of the average of the array by looping through the array. Calculate
 *  the sum of all elements then divide it by the array length. 
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

float find_mean(unsigned char* arr, unsigned int len);


/**
 * @brief evaluate the maximum of an array
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will evaluate the value of the maximum of the array by looping through the array. Compares
 *  2 elements at a time and store the largest of them. then return an 8-bit unsigned char.
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

unsigned char find_maximum(unsigned char* arr, unsigned int len);


/**
 * @brief evaluate the minimum of an array
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will evaluate the value of the minimum of the array by looping through the array. Compares
 *  2 elements at a time and store the smallest of them. then return an 8-bit unsigned char.
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

unsigned char find_minimum(unsigned char* arr, unsigned int len);


/**
 * @brief sort an array from largest to smallest
 *
 *  This function takes as an input a pointer to 8-bit unsigned char and unsinged 32-bit integer.
 *  This will sort an array from largest to smallest. Compares 2 elements at a time and swap their values to
 *  make sure that element n is larger than element n+1 through the array.
 *  
 * @param arr The pointer to 8-bit unsigned char points to first element in array
 * @param len Array length unsinged 32-bit integer
 *
 * @return void
 */

void sort_array(unsigned char* arr, unsigned int len);


#endif /* __STATS_H__ */
