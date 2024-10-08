#include <stdio.h>
#include "sorting.c"

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void insertion_sort(int *arr, int n);

int main()
{
    int n = 100;
    int arr[n]; 
    generate_random_array(arr, n); /* Generate random number from 0 to 100 */

    printf("Original array: \n");
    print_array(arr, n);

    insertion_sort(arr, n); /* sorting the arr array */

    printf("\nSorted array: \n");
    print_array(arr, n);

    return 0;
}

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

