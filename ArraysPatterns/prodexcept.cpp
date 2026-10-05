#include <iostream>
#include <vector>
using namespace std;

vector<int> productexcept(vector<int> arr){
    
    int n= arr.size();
    vector<int> result(n, 1);
    int product = 1;
    for(int i=0; i<n; i++){
        result[i] = product;
        product *= arr[i];
    }
    product = 1;
    for(int i=n-1; i>=0; i++){
        result[i] *= product;
        product *= arr[i];
    }
    return result;
}
// Main Function
int main() {

    vector<int> arr = {1, 2, 3, 4};

    vector<int> result = productexcept(arr);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}