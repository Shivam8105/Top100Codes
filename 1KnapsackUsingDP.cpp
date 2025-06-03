#include <iostream>
#include <iomanip>
using namespace std;

void knapsack(int n, int W, int wt[], int val[]) {
    int dp[n + 1][W + 1];

    // Build table dp[][] in bottom-up manner
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // Print DP table
    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            cout << setw(3) << dp[i][w] << " ";;
        }
        cout << endl;
    }

    cout << "\nMaximum value in knapsack: " << dp[n][W] << endl;
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;  // Knapsack capacity
    int n = sizeof(val) / sizeof(val[0]);

    knapsack(n, W, wt, val);

    return 0;
}

