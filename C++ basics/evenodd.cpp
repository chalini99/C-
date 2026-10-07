#include <iostream>
#include <vector>
using namespace std;

void countEvenOdd(vector<int>& arr) {
    int evenCount = 0, oddCount = 0;

    for (int num : arr) {
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even = " << evenCount << ", Odd = " << oddCount << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    countEvenOdd(arr); // Output: Even = 3, Odd = 2
    return 0;
}
