#include <iostream>
#include <vector>
using namespace std;

// Main Approach
int maxProfit(vector<int> prices) {

    int minimumPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {

        // Update minimum price
        if (prices[i] < minimumPrice) {
            minimumPrice = prices[i];
        }

        // Calculate today's profit
        int profit = prices[i] - minimumPrice;

        // Update maximum profit
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

// Main Function
int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(prices);

    cout << "Maximum Profit = " << result;

    return 0;
}