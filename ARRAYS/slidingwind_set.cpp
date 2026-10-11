#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestUniqueSubarray(const vector<int>& arr) {

    unordered_set<int> seen;

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < arr.size(); right++) {

        while (seen.count(arr[right])) {
            seen.erase(arr[left]);
            left++;
        }

        seen.insert(arr[right]);

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}