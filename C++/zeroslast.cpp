#include <iostream>
#include <vector>
using namespace std;
void pushzero(vector<int> &arr){
    int count=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0)
         arr[count++] = arr[i];
    }
    while (count < arr.size())
      arr[count++]=0;
}
int main(){
    vector<int> arr={9,2,0,3,0,4,5,0,7};
    pushzero(arr);
    for (int num : arr){
        cout<<num<<" ";

    }
    return 0;
}