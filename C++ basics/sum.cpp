#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum of the elements is: "<<sum;
    return 0;
}