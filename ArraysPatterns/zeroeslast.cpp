#include <iostream>
#include <vector>
using namespace std;


// Main Approach
void moveZeroes(vector<int> arr) {

    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zero
    while (index < arr.size()) {
        arr[index] = 0;
        index++;
    }

    // Print the result
    for (int num : arr) {
        cout << num << " ";
    }
}


// Main Function
int main() {

    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeroes(arr);

    return 0;
}