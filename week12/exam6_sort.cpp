#include <iostream>
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y =temp;
}

int partition(int arr[], int beg, int end) {
    int pivot = arr[beg];
    int i = beg;
    int j = end;
    while(i < j) {
        while (arr[j] > pivot) --j;
        while(arr[i] <= pivot) ++i;
        if(i < j) swap(&arr[i], &arr[j--]);
    }
    swap(&arr[beg], &arr[j]);
    return j;
}

void quicksort(int arr[], int beg, int end) {
    if (beg < end) {
        int p = partition(arr, beg, end);
        quicksort(arr, beg, p - 1);
        quicksort(arr, p + 1, end);
    }
}

int main() {
    int arr[] = {27, 22, 11, 94, 83, 14, 30, 19};
    int length = sizeof(arr) / sizeof(*arr);
    std::cout << "Origin: " << std::endl;
    for (int i = 0; i < length; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    quicksort(arr, 0, length - 1);
    std::cout << "Sorted: " << std::endl;
    for (int i = 0; i < length; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}