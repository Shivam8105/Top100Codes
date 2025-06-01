#include <iostream>
#include <vector>
using namespace std;

// Function to print the heap array
void printHeap(const vector<int> &heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

// Heapify for Max-Heap
void maxHeapify(vector<int> &arr, int n, int i) {
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Build Max-Heap
void buildMaxHeap(vector<int> &arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

// Heapify for Min-Heap
void minHeapify(vector<int> &arr, int n, int i) {
    int smallest = i;       // Initialize smallest as root
    int left = 2 * i + 1;   // left child
    int right = 2 * i + 2;  // right child

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

// Build Min-Heap
void buildMinHeap(vector<int> &arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};

    cout << "Original array:\n";
    printHeap(arr);

    // Build Max Heap
    vector<int> maxHeap = arr;
    buildMaxHeap(maxHeap);
    cout << "Max-Heap:\n";
    printHeap(maxHeap);

    // Build Min Heap
    vector<int> minHeap = arr;
    buildMinHeap(minHeap);
    cout << "Min-Heap:\n";
    printHeap(minHeap);

    return 0;
}
