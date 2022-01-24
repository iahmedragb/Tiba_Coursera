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
//Print the original array
    print_array(test, SIZE);
//Print the statistics of the dataset
    print_statistics(test, SIZE);
//Sort the array from largest to smallest
    sort_array(test, SIZE);
//Print the sorted array
    print_array(test, SIZE);

}


void print_statistics(unsigned char* arr, unsigned int len){
    printf("       Array Statistics \n");
    printf("=============================\n");
    printf("Maximum is : %d\n",find_maximum(arr , len));
    printf("Minimum is : %d\n",find_minimum(arr , len));
    printf("Mean Value : %d\n",find_mean(arr , len));
    printf("Median Value : %d\n",find_median(arr , len));
    printf("=============================\n");

}

void print_array(unsigned char* arr, unsigned int len){
    unsigned int i;
    printf("     Printing The Array \n");
    printf("=============================\n");
//loop through the array and print the elements from first element to last element
    for(i=0; i<len ; i++){
        printf("%4d",arr[i]);
	//Newline after successfully printing 8 elements
        if(!((1+i)%8))
            printf("\n");
    }
    printf("=============================\n");
}

unsigned int find_median(unsigned char* arr, unsigned int len){
    float average;
    unsigned int i,median;
//Sort the array in descending order
    sort_array(arr ,len);
    i = len/2 ;
//directly evaluate the value of median if array length is odd
    if(len%2){
        median=arr[i];
    }else{
//evaluate the average of the two medians in case of array length is even
        average=(arr[i]+arr[i-1])/2;
//round the median value to nearest integer
        median=(unsigned int)(average < 0 ? (average - 0.5): (average + 0.5));

    }
    return median;
}

unsigned int find_mean(unsigned char* arr, unsigned int len){
    float sum=0;
    unsigned int i,mean;
//Evaluate the sum of all elements
    for(i=0 ; i<len ; i++){
        sum+=arr[i];
    }
//Evaluate the mean value
    sum/=len;
//Round the mean value to the nearest integer
    mean=(unsigned int)(sum <0 ? (sum - 0.5): (sum + 0.5));
    return mean;
}

unsigned char find_maximum(unsigned char* arr, unsigned int len){
    unsigned char max=arr[0];
    unsigned int i;
///Compare current element with the next element and store the largest of them through the array
    for(i=0 ; i<len ; i++){
        max= ( max > arr[i] ) ? max : arr[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char* arr, unsigned int len){
    unsigned char min=arr[0];
    unsigned int i;
///Compare current element with the next element and store the smallest of them through the array
    for(i=0 ; i<len ; i++){
        min= ( min < arr[i] ) ? min : arr[i];
    }
    return min;
}


void sort_array(unsigned char* arr, unsigned int len){
	unsigned int i;
	unsigned char flag;
	unsigned char temp;


	do{
	//clear the flag
		flag=0;
	//compare current element with next element
		for(i=0 ;i<len-1 ; i++){
	//Swap value to make sure the current element is always larger than the next element
		if(arr[i] < arr[i+1]){
	//swap values and set the flag
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
           flag=1;
		}
		}
	//when done sorting the flag stay cleared and the loop exits
	}while(flag);	
}

