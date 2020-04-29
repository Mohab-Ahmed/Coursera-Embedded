#ifndef __STATS_H__
#define __STATS_H__
/********************************************************************
*
* typedef : uchar_t
*     ease of use for unsigned char
*
********************************************************************/
typedef unsigned char uchar_t;

/********************************************************************
*
* Constants :   SIZE
*     size of the array
*
********************************************************************/
#define SIZE 40

/********************************************************************
*
* Function : print_statistics
*
* Description :
*     take the given array and print the calculated statistics
*     include minimum, maximum, mean and median .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     printed statistics of the array to the screen .
*
********************************************************************/
void print_statistics(uchar_t* ptr) ;

/********************************************************************
*
* Function : print_array
*
* Description :
*     take the given array and print it on screen .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     printed array on the screen .
*
********************************************************************/
void print_array(uchar_t* ptr) ;

/********************************************************************
*
* Function : find_median
*
* Description :
*     take the given array and find it's median .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     median of the given array .
*
********************************************************************/
uchar_t find_median(uchar_t* ptr) ;

/********************************************************************
*
* Function : find_mean
*
* Description :
*     take the given array and find it's mean .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     mean of the given array .
*
********************************************************************/
uchar_t find_mean(uchar_t* ptr) ;

/********************************************************************
*
* Function : find_maximum
*
* Description :
*     take the given array and find it's maximum .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     maximum of the given array .
*
********************************************************************/
uchar_t find_maximum(uchar_t* ptr) ;

/********************************************************************
*
* Function : find_minimum
*
* Description :
*     take the given array and find it's minimum .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     minimum of the given array .
*
********************************************************************/
uchar_t find_minimum(uchar_t* ptr) ;

/********************************************************************
*
* Function : sort_array
*
* Description :
*     take the given array and print it on screen .
*
* Parameters :
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     printed array on the screen .
*
********************************************************************/
void sort_array(uchar_t* ptr) ;

#endif /* __STATS_H__ */
