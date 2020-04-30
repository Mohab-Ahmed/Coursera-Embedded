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
#include"stats.h"

int main()
{
    uchar_t data[SIZE] ={   34, 201, 190, 154,   8, 194,   2,   6 ,
                            114, 88,   45,  76, 123,  87,  25,  23,
                            200, 122, 150, 90,   92,  87, 177, 244,
                            201,   6,  12,  60,   8,   2,   5,  67,
                            7,  87, 250, 230,  99,   3, 100,  90};
    
    print_array(data);
    sort_array(data);
    print_statistics(data) ;
    printf("\nThe new sorted array from large to small will be :\n");
    print_array(data);

    return 0;
}



void print_statistics(uchar_t* ptr)
{
    printf("\nMax = %d\n",find_maximum(ptr));
    printf("Min = %d\n",find_minimum(ptr));
    printf("Mean = %d\n",find_mean(ptr));
    printf("Median = %d\n",find_median(ptr));

}


void print_array(uchar_t* ptr)
{
    for(size_t i=0;i<SIZE;i++)
    {
       printf("%d\n",*ptr);
       ptr++ ;
    }

}


uchar_t find_median(uchar_t* ptr)
{
    size_t i;
    if(SIZE%2==0)
    {
        for(i=1;i<(SIZE/2);i++)
        {ptr++;}
        return( (*ptr+*(ptr+1))/2 );
    }
        else
    {
        for(i=1;i<=(SIZE/2);i++)
        {ptr++;}
        return(*ptr) ;
    }

}


uchar_t find_mean(uchar_t* ptr)
{
    size_t sum=0 ;
    for(size_t i=0;i<SIZE;i++)
    {
        sum += *ptr;
        ptr++;
    }

    return(sum/SIZE);
}


uchar_t find_maximum(uchar_t* ptr)
{
    size_t max = *ptr ;
    for(size_t i=1;i<SIZE;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max = *ptr;
        }
    }

    return(max);
}


uchar_t find_minimum(uchar_t* ptr)
{
    int min = *ptr ;
    for(size_t i=1;i<SIZE;i++)
    {
        ptr++;
        if(*ptr<min)
        {
            min = *ptr;
        }
    }

    return(min);
}


void sort_array(uchar_t* ptr)
{
    uchar_t temp;
    for(size_t i=0;i<SIZE;i++)
    {
        for(size_t j=i+1;j<SIZE;j++)
        {
            if(*(ptr+j)>*(ptr+i))
            {
                temp = *(ptr+i) ;
                *(ptr+i)=*(ptr+j);
                *(ptr+j)= temp ;
            }
        }
    }

}
