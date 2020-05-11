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

#include "data.h"
#include<stdint.h>

/***********************************************************
 Function Definitions
***********************************************************/

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base)
{
    int32_t num=data , sign=1, count=0 ;

    //check for negative number
    if(num<0)
    {
        *ptr='-';
        sign=-1;
        ptr++;
    }
    num*=sign;

    //count how many numbers we will have to write the string,
    //from end to begginning instead of reversing it later
    while(num/base!=0)
    {
        num/=base;
        ptr++;
        count++;
    }
    count++;
    num=sign*data;
    *(++ptr)='\0';

    //converting to the required base and creating the string
    ptr--;
    while(num/base!=0)
    {
        if(num%base<10)
            *(ptr)=48+num%base;
        else
            *(ptr)=55+num%base;
        num/=base;
        ptr--;
    }
    if(num%base<10)
        *(ptr)=48+num%base;
    else
        *(ptr)=55+num%base;

    //decrementing the last pointer if negative to return string from beginning
    if (data<0)
    {
        ptr--;
    }

    return (count) ;
}


int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)
{
  //checking if the string is actually viable
  int32_t res=0,sign=1;
  if(*ptr=='+'||*ptr=='-')
  {
    if(*ptr=='+')
      sign=1;
    else
      sign=-1;
    ptr++;
    if(!((*ptr>='0'&&*ptr<='9')||(*ptr>='A'&&*ptr<='F')||(*ptr>='a'&&*ptr<='f')))
      return(res);

  }
  else if(!((*ptr>='0'&&*ptr<='9')||(*ptr>='A'&&*ptr<='F')||(*ptr>='a'&&*ptr<='f')))
  {
     return(res);
  }

  //converting the string into it's respective number
  for (uint8_t i = 0; i < digits; i++)
  {
    if (*ptr<='9')
      res=res*base+(*ptr-'0');
    else if(*ptr>='A'&&*ptr<='F')
      res=res*base+(*ptr-'7');
    else
      res=res*base+(*ptr-'W');
    ptr++;
  }

    return(sign*res);
}
