> [!NOTE]
> These are the list of common sorting algorithms written in C


## Insertion sort

```c
void insertion_sort(int *arr, int n) {
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
```

### How it works? 

The image bellow is taken from CLRS book:

![insertion_sort](images/illustrations/insertion_sort_illustration.png)


