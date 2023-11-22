#include <iostream>
#include "sorting.h"

int main()
{
    int array[9] = { 5, 8, 7, 4, 3, 11, 999, 6, 9 };

    std::cout << "Original Array: ";
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    bubble_sort(array, sizeof(array) / sizeof(array[0]));

    std::cout << "Sorted Array: ";
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}