#include <iostream>
using namespace std;

    int find(int arr[], int n, int target){
        for(int i=0; i<n; i++){
          if(arr[i]==target){
            return i;
          }
        }
        return -1;
}

int main(){
    int arr[] = {5,2,7,8,1,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int result=find(arr,n,target);
    if(result!=-1)
        cout<<"Element found at index "<<result<<endl;
    else
        cout<<"Element not found"<<endl;
    
    return 0;
}
