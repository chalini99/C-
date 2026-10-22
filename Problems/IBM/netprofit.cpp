#include <bits/stdc++.h>
using namespace std;

vector<long> getNetProfit(vector<string> events){
  unordered_map<string, long long> quantity;
    long long profit = 0;
    vector<long long> result;

    for (const string& event : events) {
        stringstream ss(event);
        string action, stock;
        long long value;

        ss >> action;

        if (action == "BUY") {
            ss >> stock >> value;
            quantity[stock] += value;
        }
        else if (action == "SELL") {
            ss >> stock >> value;
            quantity[stock] -= value;
        }
        else if (action == "CHANGE") {
            ss >> stock >> value;
            profit += quantity[stock] * value;
        }
        else if (action == "QUERY") {
            result.push_back(profit);
        }
    }

    return result;
}