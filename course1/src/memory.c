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
 * @file memory.c
 * @brief Abstraction of memory read and write operations
 *
 * This implementation file provides an abstraction of reading and
 * writing to memory via function calls. There is also a globally
 * allocated buffer array used for manipulation.
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#include "memory.h"
#include<stdint.h>

/***********************************************************
 Function Definitions
***********************************************************/
void set_value(char * ptr, unsigned int index, char value){
  ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index){
  set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index){
  return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size){
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}

void clear_all(char * ptr, unsigned int size){
  set_all(ptr, 0, size);
}

uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length)
{
  //type cast to char cuz it's 1 byte
  char* csrc=(char*)src;
  char* cdst=(char*)dst;

  if(dst<=src)
    {
      for(size_t i=0;i<length;i++)
        *(cdst+i)=*(csrc+i);
    }
    else
    {
      for(size_t i=length;i>0;i--)
        *(cdst+i-1)=*(csrc+i-1);
    }

  return((uint8_t*)cdst);
}

uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length)
{
  //type cast to char to copy byte by byte
  char *csrc=(char*)src;
  char *cdst=(char*)dst;

  //copying byte by byte
  for (size_t i = 0; i < length; i++)
  {
    *(cdst+i)=*(csrc+i);
  }
  return((uint8_t*)cdst);
}

uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value)
{
  //type cast to char to copy byte by byte
  char *csrc=(char*)src;

  for (size_t i = 0; i < length; i++)
  {
    *(csrc+i)=value;
  }
  return((uint8_t*)csrc);
}

uint8_t * my_memzero(uint8_t * src, size_t length)
{
  //type cast to char to copy byte by byte
  char *csrc=(char*)src;

  for (size_t i = 0; i < length; i++)
  {
    *(csrc+i)=0;
  }
  return((uint8_t*)csrc);
}

uint8_t * my_reverse(uint8_t * src, size_t length)
{
  //type cast to char to copy byte by byte
  char *csrc=(char*)src;

  char temp[length];

  for(size_t i=0;i<length;i++)
    *(temp+i)=*(csrc+i);

  //temp+length-1-i to get to the last element of the temp array
  for(size_t i=0;i<length;i++)
    *(csrc+i)=*(temp+length-1-i);
  return((uint8_t*)csrc);
}

int32_t * reserve_words(size_t length)
{
  return(malloc(length*sizeof(char*)));
}

void free_words(uint32_t * src)
{
  free(src);
}