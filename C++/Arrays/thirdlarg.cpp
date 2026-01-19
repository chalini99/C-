#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int thirdlar(vector<int> &arr){
    int n = arr.size();
    int largest= INT_MIN;
    for(int i=0; i<n; i++){
       if( arr[i]>largest)
        largest=arr[i];
    }
    int seclar=INT_MIN;
    for (int i=0; i<n; i++){
        if(arr[i]>seclar && arr[i]!=largest )
          seclar=arr[i];
            
    }
    int thirlar=INT_MIN;
    for(int i=0; i<n; i++){
        if (arr[i]>thirlar && arr[i]<seclar)
            thirlar = arr[i];
    }
    return thirlar;
}
int main(){
    vector<int> arr ={12,34,90,1,3};
    cout<<thirdlar(arr)<<endl;
    return 0;
}