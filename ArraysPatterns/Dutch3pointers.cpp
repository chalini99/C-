#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
     
    while (mid<=high){
        if (arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for (int num:arr){
        cout<<num<<" ";
    }
}
int main() {

    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sort012(arr);

    return 0;
}