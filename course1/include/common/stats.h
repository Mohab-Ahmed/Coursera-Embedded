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
*     int * ptr : pointer to the given array .
*     int SIZE  : number of items in the array .
*
* Return :
*     printed array on the screen .
*
********************************************************************/
int print_array(unsigned int * ptr) ;

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
int find_maximum(unsigned int * ptr1) ;

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
int find_minimum(unsigned int * ptr2) ;

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
int find_mean(unsigned int * ptr3) ;

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
int find_median(unsigned int * ptr4) ;

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
int sort_array(unsigned int * ptr5) ;

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
int print_statistics(unsigned int * ptr6) ;

/********************************************************************
*
* Constants :
*     size of the array
*
********************************************************************/
#define SIZE 40

#endif /* __STATS_H__ */
