#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void selection_sort(int *arr, int n);
void print_array(int *arr, int n);
void generate_random_array(int arr[], int n);
void swap(int *a, int *b);

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

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++) printf("%d, ", arr[i]);
    printf("\n");
}

void generate_random_array(int arr[], int n)
{
    n = n + 1;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
