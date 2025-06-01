#include <iostream>
#include <vector>
using namespace std;

void printPairsWithSum(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "(" << arr[left] << ", " << arr[right] << ")\n";

            // Move left and right to next different elements to avoid duplicates
            int currentLeft = arr[left];
            int currentRight = arr[right];
            while (left < right && arr[left] == currentLeft) left++;
            while (left < right && arr[right] == currentRight) right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
}

int main() {
    int n, target;
    cout << "Enter size of sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    cout << "Pairs with sum " << target << ":\n";
    printPairsWithSum(arr, target);

    return 0;
}
