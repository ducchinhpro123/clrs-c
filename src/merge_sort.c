#include <stdio.h>
#include "sorting.c"

void merge_sort(int *arr, int p, int r);
void merge(int *arr, int p, int q, int r);

int main()
{
    int n = 100;
    int arr[n];
    generate_random_array(arr, n); /* Generate random number from 0 to 100 */

    printf("Original array: \n");
    print_array(arr, n);

    merge_sort(arr, 0, n);
    // selection_sort(arr, n); /* sorting the arr array */

    printf("\nSorted array: \n");
    print_array(arr, n);

    return 0;
}

void merge_sort(int *arr, int p, int r)
{
    if (p >= r) {
        return;
    }
    
    int q = (p + r) / 2; /* Midpoint of arr[p : r] */

    merge_sort(arr, p, q);
    merge_sort(arr, q + 1, r);

    /* merge arr[p : q] and arr[q+1 : r] to arr[p : r] */
    merge(arr, p, q, r);
}

void merge(int *arr, int p, int q, int r)
{
    int i = 0, j = 0, k = p;

    int len_left = q - p + 1; /* length of arr[p : q] */
    int len_right = r - q; /* length of arr[q+1 : r] */

    int arr_left[len_left];
    int arr_right[len_right];

    for (i = 0; i < len_left; i++) 
        arr_left[i] = arr[p + i]; /* copy arr[p : q] to arr_left[0 : l_left - 1] */

    for (j = 0; j < len_right; j++) 
        arr_right[j] = arr[q + j + 1]; /* copy arr[q+1 : r] to arr_right[0 : l_right - 1] */
    

    i = 0, j = 0;

    while (i < len_left && j < len_right) {
        if (arr_left[i] <= arr_right[j]) {
            arr[k] = arr_left[i];
            i++;
        } else {
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }


    /* Copy the remainder of the other to the end of arr[p : r] */
    while(i < len_left) {
        arr[k] = arr_left[i];
        i++; k++;
    }
    while(j < len_right) {
        arr[k] = arr_right[j];
        j++; k++;
    }
}
