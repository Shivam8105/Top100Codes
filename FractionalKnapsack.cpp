#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;  // profit/weight ratio
};

// Comparator to sort items by profit/weight ratio in descending order
bool cmp(const Item &a, const Item &b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(int capacity, vector<Item> &items) {
    // Sort items by ratio
    sort(items.begin(), items.end(), cmp);

    double totalProfit = 0.0;
    int currWeight = 0;

    for (auto &item : items) {
        if (currWeight + item.weight <= capacity) {
            // Take whole item
            currWeight += item.weight;
            totalProfit += item.profit;
        } else {
            // Take fraction of the item
            int remain = capacity - currWeight;
            totalProfit += item.ratio * remain;
            break;  // Knapsack is full
        }
    }
    return totalProfit;
}

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    cout << "Enter weight and profit for each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].profit;
        items[i].ratio = (double)items[i].profit / items[i].weight;
    }

    cout << "Enter capacity of knapsack: ";
    cin >> capacity;

    double maxProfit = fractionalKnapsack(capacity, items);

    cout << "Maximum profit in knapsack = " << maxProfit << endl;

    return 0;
}
