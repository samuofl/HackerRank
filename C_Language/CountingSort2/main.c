#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintCountSortedArray(int ar_size, int arr[])
{
    int i;
    int j;

    for(i=0;i<ar_size;i++)
    {
        for(j=0;j<arr[i];j++)
        {
            printf("%d ", i);
        }
    }
}

void CountingSort(int ar_size, int ar[])
{
    int counts[100];
    int i;

    memset(counts, 0, sizeof(counts));

    for(i=0;i<ar_size;i++)
    {
        counts[ar[i]]++;
    }

    PrintCountSortedArray(100, counts);
}

int main()
{
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++)
    {
        scanf("%d", &_ar[_ar_i]);
    }

    CountingSort(_ar_size, _ar);

    return 0;
}
