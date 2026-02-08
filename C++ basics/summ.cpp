#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        arr[0] += arr[i];
        }
    
    return arr[0];
}

int main() {
    vector<int> arr = {1,2,3,4};
    cout << sum(arr); 
    return 0;
}
