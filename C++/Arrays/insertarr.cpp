#include <iostream>
using namespace std;
int main(){ 
    int arr[5];
    int n;
    int pos;
    int x;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
    cout<<"Enter the element: "<<i<<endl;
    cin>>arr[i];
    
    }
    cout<<"Enter position to insert an element: "<<endl;
    cin>>pos;
    cout<<"Enter the element to insert: "<<endl;
    cin>>x;
    for(int i=n; i>pos; i--){
        arr[i = arr[i-1]];
    }
    arr[pos]=x;
    n++;
    cout<<"Updated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

