//Longest Subarray with Sum K
//Given an array of integers arr and an integer K, find the length of the longest subarray whose sum is equal to K.
// Input: arr = [10, 5, 2, 7, 1, 9], K = 15
// Output: 4
// ( Subarray: [5, 2, 7, 1] )
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int K) {
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == K) {
            maxLen = i + 1;
        }

        if (mp.find(sum - K) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - K]);
        }

        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
    return maxLen;
}
int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int K = 15;
    cout << longestSubarrayWithSumK(arr, K);
    return 0;
}