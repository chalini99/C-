#include <iostream>
#include <vector>
using namespace std;

// Main Approach
vector<int> twoSum(vector<int> arr, int target) {

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right};
        }

        else if (sum < target) {
            left++;
        }

        else {
            right--;
        }
    }

    return {};
}

// Main Function
int main() {

    vector<int> arr = {1, 2, 4, 6, 8, 9};

    int target = 10;

    vector<int> result = twoSum(arr, target);

    if (result.size() == 2) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " + "
             << arr[result[1]] << " = " << target;
    }
    else {
        cout << "No pair found";
    }

    return 0;
}