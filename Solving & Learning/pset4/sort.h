/**
 * sort.h
 *
 * A few readymade sorting algorithms given here.
 *
 */

#include <cs50.h>
/**
    O(n*n) algorithms
 **/
void bubbleSort(int values[], int n);

void selectionSort(int values[], int n);

void insertionSort(int values[], int n);

/**
 *  O(n*n) and Omega(log n) algorithm
 *
 */
int partition(int values[],int lme,int pivot);
void quickSort(int values[],int lme,int pivot);

//Miscallaneous sort
void movieSort(char* movies[], float values[], int n);
