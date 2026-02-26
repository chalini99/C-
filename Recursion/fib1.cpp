#include <iostream>
using namespace std;
int main(){
    int n;
    int a, b, c;
    a=0;
    b=1;

    cout<<"enter no:";
    cin>>n;
    cout<<"fibonacci series: ";
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
    return 0;
}