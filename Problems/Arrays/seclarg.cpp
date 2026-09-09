#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int seclarg(vector<int>&  arr){
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if (arr[i]>largest){
            second = largest;
            largest = arr[i];

        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    vector<int> arr = {10,5,8,34,3};
    cout<<seclarg(arr);
    return 0;
}
