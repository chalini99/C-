#include <iostream>
#include <vector>
using namespace std;
bool issorted(vector<int> arr){
    int n= arr.size();
    for (int i=1; i<n; i++){
        if (arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;

}
int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    if (issorted(arr)) {
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }

    return 0;
}