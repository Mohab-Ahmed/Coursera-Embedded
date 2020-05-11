#ifndef __STATS_H__
#define __STATS_H__
/********************************************************************
*
* Function : print_array
*
* Description :
*     take the given array and print it on screen .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     printed array on the screen .
*
********************************************************************/
void print_array(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : find_maximum
*
* Description :
*     take the given array and find it's maximum .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     maximum of the given array .
*
********************************************************************/
unsigned char find_maximum(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : find_minimum
*
* Description :
*     take the given array and find it's minimum .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     minimum of the given array .
*
********************************************************************/
unsigned char find_minimum(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : find_mean
*
* Description :
*     take the given array and find it's mean .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     mean of the given array .
*
********************************************************************/
unsigned char find_mean(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : find_median
*
* Description :
*     take the given array and find it's median .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     median of the given array .
*
********************************************************************/
unsigned char find_median(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : sort_array
*
* Description :
*     take the given array and print it on screen .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     printed array on the screen .
*
********************************************************************/
void sort_array(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Function : print_statistics
*
* Description :
*     take the given array and print the calculated statistics
*     include minimum, maximum, mean and median .
*
* Parameters :
*     ptr  : unsigned char pointer to the given array .
*     size : number of items in the array .
*
* Return :
*     printed statistics of the array to the screen .
*
********************************************************************/
void print_statistics(unsigned char * ptr,unsigned int size) ;

/********************************************************************
*
* Constants :
*     size of the array
*
********************************************************************/
#define ARRAY_SIZE 40

#endif /* __STATS_H__ */
