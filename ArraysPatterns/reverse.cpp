#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> arr){
    int left = 0;
    int right = arr.size()-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int  num:arr){
        cout<<num<<" ";
    }
}
int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    reverse(arr);

    return 0;
}