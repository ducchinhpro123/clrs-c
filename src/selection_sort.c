#include <stdio.h>
#include "sorting.c"

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void selection_sort(int *arr, int n);

int main()
{
    int n = 100;
    int arr[n];
    generate_random_array(arr, n); /* Generate random number from 0 to 100 */

    printf("Original array: \n");
    print_array(arr, n);

    selection_sort(arr, n); /* sorting the arr array */

    printf("\nSorted array: \n");
    print_array(arr, n);

    return 0;
}

void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

