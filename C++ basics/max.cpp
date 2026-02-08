#include <iostream>
#include <vector>
using namespace std;
int findmax(vector<int>& arr){
    int max=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int main(){
    vector<int> arr= {1,223,2,3,4};
    cout<<findmax(arr);
    return 0;
}