#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int mid;

    cout << "Trace:\n";
    while (low <= high) {
        mid = (low + high) / 2;
        cout << "low = " << low << ", mid = " << mid << ", high = " << high << " --> ";
        cout << "arr[mid] = " << arr[mid] << endl;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // not found
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr[0]) << endl;
    int key = 10;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found.\n";

    return 0;
}
