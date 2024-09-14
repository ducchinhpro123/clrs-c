#ifdef SORTING_H
#define SORTING_H

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))


void print_array(int *arr, int n);
void generate_random_array(int arr[], int n);
void swap(int *a, int *b);

#endif
