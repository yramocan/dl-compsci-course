#include <stdio.h>
#include <stdbool.h>

void sort(int*, int, bool);
void printArray(int*, int);

int main() {
    int arr[8] = { 4, 7, 5, 0, 1, -55, -2, 16 };
    
    puts("Unsorted Array:");
    printArray(arr, 8);
    
    puts("Sorted Array (Ascending):");
    sort(arr, 8, true);
    printArray(arr, 8);
    
    puts("Sorted Array (Descending):");
    sort(arr, 8, false);
    printArray(arr, 8);
    
    return 0;
}

void sort(int a[], int n, bool asc) {
    int temp, k = n - 1;
    
    if (n == 0) return;

    for (int j = k - 1; j >= 0; --j) {
        if ((asc && a[k] < a[j]) || (!asc && a[k] > a[j])) {
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
        }
    }
    
    sort(a, n - 1, asc);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf ("%i ", arr[i]);
    }
    
    puts("\n");
}
