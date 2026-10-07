#include <iostream>
#include <vector>
using namespace std;
int missingno(vector<int> arr){
    int n= arr.size();
    int output = n*(n+1)/2;
    int actual_sum=0;
    for (int i = 0; i < n; i++) {
        actual_sum = actual_sum+arr[i];
    }
    return output-actual_sum;

}
int main() {

    vector<int> arr = {3, 0, 1};

    int result = missingno(arr);

    cout << "Missing number = " << result;

    return 0;
}