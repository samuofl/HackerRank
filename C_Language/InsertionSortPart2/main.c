#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

void PrintIntArray(int ar_size, int ar[]);

bool isArraySorted(int ar_size, int ar[])
{
    int i;
    for(i=1;i<ar_size;i++)
    {
        if(ar[i] > ar[i-1]) return false;
    }

    return true;
}



void insertionSort(int ar_size, int *  ar)
{
    int i;
    int j;

    for(i=0;i<ar_size;i++)
    {
        j=i;
        while((j > 0) && ar[j-1] > ar[j])
        {
            int tempvar;
            tempvar = ar[j];
            ar[j] = ar[j-1];
            ar[j-1] = tempvar;
            j--;
        }

        if(i) PrintIntArray(ar_size, ar);
    }
}

int main(void) {

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


void PrintIntArray(int ar_size, int ar[])
{
    int i;
    for(i=0;i<ar_size;i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

}
