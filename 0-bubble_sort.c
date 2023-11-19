#include <stdio.h>
#include <cs50.h>
#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size) {
    if (array == NULL || size < 2) {
        return; // No need to sort an array with less than 2 elements
    }

    size_t i, j;
    int temp;
    int swapped;

    for (i = 0; i < size - 1; i++) {
        swapped = 0; // Flag to check if any swaps occurred in this pass

        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements and set swapped flag to true
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;

                // Print the array after each swap
                print_array(array, size);
            }
        }

        // If no swaps occurred, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}
