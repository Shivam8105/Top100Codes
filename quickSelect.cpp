#include <iostream>
#include <vector>
using namespace std;

// Partition function similar to QuickSort
int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right]; // Choosing last element as pivot
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

// QuickSelect function to find kth smallest element
int quickSelect(vector<int>& arr, int left, int right, int k) {
    if (left == right) // Only one element
        return arr[left];

    int pivotIndex = partition(arr, left, right);

    if (pivotIndex == k - 1)
        return arr[pivotIndex];
    else if (pivotIndex > k - 1)
        return quickSelect(arr, left, pivotIndex - 1, k);
    else
        return quickSelect(arr, pivotIndex + 1, right, k);
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter k: ";
    cin >> k;

    if (k < 1 || k > n) {
        cout << "Invalid k\n";
        return 0;
    }

    int kthSmallest = quickSelect(arr, 0, n - 1, k);
    cout << "The " << k << "th smallest element is: " << kthSmallest << endl;

    return 0;
}
