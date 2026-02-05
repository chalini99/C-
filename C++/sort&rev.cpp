#include <iostream>
#include <vector>
using namespace std;

bool checkSortedRotated(vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n])
            count++;
    }
    return count <= 1;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << checkSortedRotated(arr);
}
