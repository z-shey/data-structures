#include "sorting.h"

void bubbleSort(int* array, int length)
{
    int index = length - 1;
    while (index > 0)
    {
        bool flag = false;
        for (int i = 0; i < index; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                flag = true;
            }
        }
        if (!flag) break;
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


void bubble_sort(int a[], int n)
{
    bool change;
    int i = 0, j = 0;
    for (i = n - 1, change = true; i >= 1 && change; --i)
    {
        change = false;
        for (j = 0; j < i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                change = true;

            }

        }
    }
}