#include <stdio.h>
#include <stdlib.h>
#include "../include/sorting.h"

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++) printf("%d, ", arr[i]);
    printf("\n");
}

void generate_random_array(int arr[], int n)
{
    n = n + 1;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
