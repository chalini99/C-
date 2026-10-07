#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> arr) {

    vector<int> leaders;

    int maxRight = arr[arr.size() - 1];

    leaders.push_back(maxRight);

    for (int i = arr.size() - 2; i >= 0; i--) {

        if (arr[i] > maxRight) {

            leaders.push_back(arr[i]);

            maxRight = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    return leaders;
}

// Main Function
int main() {

    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> result = findLeaders(arr);

    cout << "Leaders: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}