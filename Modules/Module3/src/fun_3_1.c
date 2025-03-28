/*
 *created: 13 Feb,2025
 *author: Krupal Vachhani(166883)
*/

#include "../include/header3.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include<time.h>

/* Main Function */
void fun_3_1()
{
    int n, element, i;
 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    /* User input: array elements */
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search for: ");
    scanf("%d", &element);
 
    // Check if the array is sorted
    int is_sorted = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            is_sorted = 0;
            break;
        }
    }
 
    if (!is_sorted)
    {
        printf("Array is not sorted. (Programmer can sort array in code and search for element).\n");
        exit(1);
    }
 
    // Perform binary search with timing
    clock_t start_time = clock();  // Start timing
 
    int left = 0, right = n - 1;
    int found = 0; // Flag to indicate if the element was found
 
    while (left <= right && !found)
    {  // Single condition in while loop
        int mid = left + (right - left) / 2;
 
        if (arr[mid] == element)
        {
            printf("Element %d found in array at index %d\n", element, mid);
            found = 1;
        } else
        {
            // Use a single condition to adjust left or right
            left = (arr[mid] < element) ? mid + 1 : left;
            right = (arr[mid] > element) ? mid - 1 : right;
        }
    }
 
    if (!found)
    {
        printf("Element %d not found in array\n", element);
    }
 
    clock_t end_time = clock();  // End timing
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time taken for binary search: %lf seconds\n", time_taken);
}
