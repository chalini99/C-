#include <iostream>
#include <vector>
using namespace std;

int maxprof(vector<int> prices){
    int miniprice = prices[0];
    int maxprofit = 0;
    for (int i=0; i<prices.size(); i++){
        if( miniprice>prices[i]){
            miniprice = prices[i];
        }
        int profit = prices[i] - miniprice;
        maxprofit = max(maxprofit, profit);
    }
    return maxprofit;
}

// Main Function
int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxprof(prices);

    cout << "Maximum Profit = " << result;

    return 0;
}