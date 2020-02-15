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

int main()
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

    return 0 ;
}



int print_array(unsigned int * ptr )
{
    for(int i=0;i<SIZE;i++)
    {
       printf("%d-%d\n",i+1,*ptr);
       ptr++ ;
    }

    return 0 ;

}


int find_maximum(unsigned int * ptr1)
{
    int max = *ptr1 ;
    for(int i=1;i<SIZE;i++)
    {
        ptr1++;
        if(*ptr1>max)
        {
            max = *ptr1 ;
        }
    }
    return(max);
}


int find_minimum(unsigned int * ptr2)
{
    int min = *ptr2 ;
    for(int i=1;i<SIZE;i++)
    {
        ptr2++;
        if(*ptr2<min)
        {
            min = *ptr2 ;
        }
    }
    return(min);
}


int find_mean(unsigned int * ptr3)
{
    int sum=0 ;
    for(int i=0;i<SIZE;i++)
    {
        sum += *ptr3 ;
        ptr3++;
    }
    return(sum/SIZE);
}


int find_median(unsigned int * ptr4)
{
    int median , temp=0 ;
    if(SIZE%2==0)
    {
        for(int i=1;i<(SIZE/2);i++)
        {ptr4++;}
        temp += *ptr4 ;
        ptr4++ ;
        median = (temp+*ptr4)/2;
    }
        else
    {
        for(int j=1;j<=(SIZE/2);j++)
        {ptr4++;}
        median = *ptr4 ;
    }
        return(median);
}


int sort_array(unsigned int * ptr5)
{
    unsigned int temp[SIZE] , hold   ;
    for(int i=0;i<SIZE;i++)
    {
        temp[i]=*ptr5 ;
        ptr5++;
    }
    for(int j=0;j<SIZE;j++)
    {
        for(int k=j+1;k<SIZE;k++)
        {
            if(temp[k]>temp[j])
            {
                hold = temp[j] ;
                temp[j]=temp[k];
                temp[k] = hold ;
            }
        }
    }
    print_array(&temp[0]);

    return 0 ;

}


int print_statistics(unsigned int * ptr6)
{
    printf("\nMax = %d\n",find_maximum(ptr6));
    printf("Min = %d\n",find_minimum(ptr6));
    printf("Mean = %d\n",find_mean(ptr6));
    printf("Median = %d\n",find_median(ptr6));

    return 0 ;
}
