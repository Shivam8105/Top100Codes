#include <iostream>
using namespace std;

int calls_first = 0;
int calls_last = 0;
int calls_median = 0;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// First element as pivot
int partition_first(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[low], arr[i - 1]);
    return i - 1;
}

// Last element as pivot
int partition_last(int arr[], int low, int high) {
    swap(arr[low], arr[high]); // move last to first
    return partition_first(arr, low, high);
}

// Median-of-three as pivot
int partition_median(int arr[], int low, int high) {
    int mid = (low + high) / 2;

    // find median of arr[low], arr[mid], arr[high]
    int a = arr[low], b = arr[mid], c = arr[high];
    int medianIndex;

    if ((a < b && b < c) || (c < b && b < a)) medianIndex = mid;
    else if ((b < a && a < c) || (c < a && a < b)) medianIndex = low;
    else medianIndex = high;

    swap(arr[low], arr[medianIndex]); // move median to first
    return partition_first(arr, low, high);
}

void quicksort_first(int arr[], int low, int high) {
    if (low < high) {
        calls_first++;
        int p = partition_first(arr, low, high);
        quicksort_first(arr, low, p - 1);
        quicksort_first(arr, p + 1, high);
    }
}

void quicksort_last(int arr[], int low, int high) {
    if (low < high) {
        calls_last++;
        int p = partition_last(arr, low, high);
        quicksort_last(arr, low, p - 1);
        quicksort_last(arr, p + 1, high);
    }
}

void quicksort_median(int arr[], int low, int high) {
    if (low < high) {
        calls_median++;
        int p = partition_median(arr, low, high);
        quicksort_median(arr, low, p - 1);
        quicksort_median(arr, p + 1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

void testStrategy(int original[], int n) {
    int a1[100], a2[100], a3[100];
    for (int i = 0; i < n; i++) {
        a1[i] = a2[i] = a3[i] = original[i];
    }
    quicksort_first(a1, 0, n - 1);
    quicksort_last(a2, 0, n - 1);
    quicksort_median(a3, 0, n - 1);
    cout << "Sorted array (any strategy): ";
    printArray(a1, n);
    cout << "Recursive calls with first element as pivot: " << calls_first << endl;
    cout << "Recursive calls with last element as pivot:  " << calls_last << endl;
    cout << "Recursive calls with median-of-three pivot:  " << calls_median << endl;
}

int main() {
    int arr[] = {8, 4, 7, 3, 10, 2, 6, 1, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    testStrategy(arr, n);
    return 0;
}
