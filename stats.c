/********************************************************************
* File : stats.c
*
* Author : Mohab Ahmed
* Date   : jan 2020
*
* Description : A simple C-program for coursera's Embedded course ,
* in this program we will take unsigned int data then perform some
* basic functions like :
*                      -get maximum
*                      -get minimum
*                      -get mean
*                      -get median
*                      -sort from large to small
*
********************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include"stats.h"

void main()
{
    unsigned int data[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6 ,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    print_array(&data[0]);
    print_statistics(&data[0]) ;
    printf("\nThe new sorted array from large to small will be :\n");
    sort_array(&data[0]) ;
}

int print_array(int * ptr )
{
}

int find_maximum(int * ptr1)
{
}

int find_minimum(int * ptr2)
{
}

int find_mean(int * ptr3)
{
}

int find_median(int * ptr4)
{
}

int sort_array(int * ptr5)
{
}

int print_statistics(int * ptr6)
{
}

