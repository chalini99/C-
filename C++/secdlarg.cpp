#include <iostream>
#include <vector>
using namespace std;
int seclarg(vector<int> &arr){
    int n=arr.size(); //stores no of elements
    int largest=-1, seclar=-1;
    for (int i=0; i<n; i++){
        if (arr[i] >largest)
          largest=arr[i];
    }
    for (int i=0; i<n; i++){
        if (arr[i]> seclar && arr[i]!=largest){
            seclar=arr[i];
        }
    }
    return seclar;
}
int main(){
    vector<int>arr={12,35,23,38,9};
    cout<<seclarg(arr);
    return 0;
} 