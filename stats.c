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
 * @file stats.c
 * @brief Analyze statistics of an array and reorder it in a descending order.
 *	  Then print the array before and after analysis.
 *
 *  these functions analyze an array of unsigned char data items and report analytics
 *  on the maximum, minimum, mean, and median of the data set.
 *  In addition to reorder this data set in descending order.
 *  Then print the statistics and the data set to the screen.
 *
 * @author Ahmed Tiba
 * @date 24-1-2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

}


void print_statistics(unsigned char* arr, unsigned int len){}

void print_array(unsigned char* arr, unsigned int len){}

unsigned char find_median(unsigned char* arr, unsigned int len){}

float find_mean(unsigned char* arr, unsigned int len){}

unsigned char find_maximum(unsigned char* arr, unsigned int len){}

unsigned char find_minimum(unsigned char* arr, unsigned int len){}


void sort_array(unsigned char* arr, unsigned int len){}

