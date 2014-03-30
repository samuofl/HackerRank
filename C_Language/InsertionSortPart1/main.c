//Submission for Insertion Sort - Part 1 on Hackerrank
//https://www.hackerrank.com/challenges/insertionsort1
//Sam Ryan, 2014

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int ar[]);
void PrintIntArray(int ar_size, int ar[]);

int main(void)
{
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        scanf("%d", &_ar[_ar_i]);
    }
    insertionSort(_ar_size, _ar);

    return 0;
}

void insertionSort(int ar_size,int ar[])
{
    const int max_array_index = ar_size - 1;
    int i;
    int sortVal = ar[max_array_index]; //Value to sort is initially in the far right position of array


    for(i=max_array_index;i>=0;i--)
    {
        //If end of list is reached, the sorted value
        //must be smaller than any other number in the
        //list so it must be first in list
        if(i == 0)
        {
            ar[i] = sortVal;
            PrintIntArray(ar_size, ar);
        }
        //If sort value is is less than next array member down,
        //it must be moved further down list
        else if(sortVal < ar[i-1])
        {
            ar[i] = ar[i-1];
            PrintIntArray(ar_size, ar);
        }
        //If sort value is larger than next array element, it
        //must go here!
        else
        {
            ar[i] = sortVal;
            PrintIntArray(ar_size, ar);
            break;
        }

    }

}

void PrintIntArray(int ar_size, int ar[])
{
    int i;
    for(i=0;i<ar_size;i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

}
