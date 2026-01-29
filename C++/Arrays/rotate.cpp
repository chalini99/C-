#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }
};

int main() {
    int n, d;
    cin >> n;              
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     
    }

    cin >> d;            
    Solution obj;
    obj.rotateArr(arr, d);

    // Print rotated array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
