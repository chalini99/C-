#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b;
    cout<<"Before Swap: a="<<a<<" b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After Swap: a="<<a<<" b="<<b<<endl;
    return 0;
}