#include <iostream>
#include <vector>
using namespace std;


// Main Approach
int countFrequency(vector<int> arr, int target) {

    int count = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}


// Main Function
int main() {

    vector<int> arr = {1, 2, 3, 2, 2, 4, 2};

    int target = 2;

    int result = countFrequency(arr, target);

    cout << "Frequency of " << target << " = " << result;

    return 0;
}