#include <iostream>
#include <vector>
using namespace std;

// Main Approach
vector<int> rearr(vector<int> arr){
    int n= arr.size();
    vector<int> result(n);
    int pos=0;
    int neg=1;
    for (int i=0; i<n; i++){
        if (arr[i] >0){
            result[pos] = arr[i];
            pos +=2;
        }
        else{
            result[neg] = arr[i];
            neg +=2;
        }
    }
    return result;
}

// Main Function
int main() {

    vector<int> arr = {3, 1, -2, -5, 2, -4};

    vector<int> result = rearr(arr);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}