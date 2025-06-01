#include <iostream>
#include <vector>
using namespace std;

// Function to print the array
void printArray(vector<int> &arr) {
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

// Heapify a subtree rooted at index i
void heapify(vector<int> &arr, int n, int i) {
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Build max heap
void buildHeap(vector<int> &arr, int n) {
    cout << "Building max heap step by step:\n";
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
        printArray(arr);
    }
}

// Heap sort function
void heapSort(vector<int> &arr) {
    int n = arr.size();

    // Step 1: Build max heap
    buildHeap(arr, n);

    // Step 2: One by one extract elements from heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); // Move current root to end
        heapify(arr, i, 0);   // call max heapify on reduced heap
    }
}

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};
    cout << "Original array:\n";
    printArray(arr);

    heapSort(arr);

    cout << "\nSorted array:\n";
    printArray(arr);

    return 0;
}
