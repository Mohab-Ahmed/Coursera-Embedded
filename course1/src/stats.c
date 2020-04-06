/********************************************************************
* File : stats.c
*
* Author : Mohab Ahmed
* Date   : jan 2020
*
* Description : A simple C-program for coursera's Embedded course ,
* in this program we will take unsigned char data then perform some
* basic functions like :
*                      -get maximum
*                      -get minimum
*                      -get mean
*                      -get median
*                      -sort from large to small
*
********************************************************************/
//#include <stdio.h>     /* removed to include the decleration in platform.h */
#include"stats.h"
#include"platform.h"

int main()
{
    unsigned int length = ARRAY_SIZE;
    unsigned char data[ARRAY_SIZE] = {34, 201, 190, 154,   8, 194,   2,   6 ,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    print_array(data,length);
    print_statistics(data,length) ;
    sort_array(data,length) ;
    print_array(data,length);

    return 0 ;
}


void print_array(unsigned char * ptr,unsigned int size)
{
    #ifdef VERBOSE
    for(unsigned int i=0;i<size;i++)
    {
       printf("%d-%c\n",i+1,*ptr);
       ptr++ ;
    }
    #endif
}


unsigned char find_maximum(unsigned char * ptr,unsigned int size)
{
    unsigned char max = *ptr ;
    for(unsigned int i=1;i<size;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max = *ptr;
        }
    }
    return(max);
}


unsigned char find_minimum(unsigned char * ptr,unsigned int size)
{
    unsigned char min = *ptr ;
    for(unsigned int i=1;i<size;i++)
    {
        ptr++;
        if(*ptr<min)
        {
            min = *ptr ;
        }
    }
    return(min);
}


unsigned char find_mean(unsigned char * ptr,unsigned int size)
{
    int sum=0 ;
    for(unsigned int i=0;i<size;i++)
    {
        sum += *ptr ;
        ptr++;
    }
    return(sum/size);
}


unsigned char find_median(unsigned char * ptr,unsigned int size)
{
    unsigned char temp=0 ;
    if(size%2==0)
    {
        for(unsigned int i=1;i<(size/2);i++)
        {ptr++;}
        temp += *ptr ;
        ptr++ ;
        return((temp+*ptr)/2);
    }
        else
    {
        for(unsigned int j=1;j<=(size/2);j++)
        {ptr++;}
        return(*ptr);
    }
}


void sort_array(unsigned char * ptr,unsigned int size)
{
    unsigned char hold;
    for(unsigned int i=0;i<size;i++)
    {
        for(unsigned int j=i+1;j<size;j++)
        {
            if(ptr[j]>ptr[i])
            {
                hold = ptr[i] ;
                ptr[i]=ptr[j];
                ptr[j] = hold ;
            }
        }
    }
}


void print_statistics(unsigned char * ptr,unsigned int size)
{
    printf("\nMax = %c\n",find_maximum(ptr,size));
    printf("Min = %c\n",find_minimum(ptr,size));
    printf("Mean = %c\n",find_mean(ptr,size));
    printf("Median = %c\n\n",find_median(ptr,size));
}
