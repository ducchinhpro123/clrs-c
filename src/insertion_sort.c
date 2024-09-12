#include <stdio.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void insertion_sort(int *arr, int n);
void print_array(int *arr, int n);

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int arr_size = ARR_SIZE(arr);

    printf("Original array: \n");
    print_array(arr, arr_size);

    insertion_sort(arr, arr_size); /* sorting the arr array */

    printf("\nSorted array: \n");
    print_array(arr, arr_size);

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

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
