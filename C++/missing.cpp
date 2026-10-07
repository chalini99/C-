//missing
#include <iostream>
#include <vector>
using namespace std;
int miss(vector<int> &arr){
    int n= arr.size();
    int x=0;
    for (int i=0; i<=n; i++){
        x^=i;
    }
      for (int y : arr){
          x^=y;
      }
    

    return x;
}
int main(){
    vector<int> arr={1,0,3,7,9};
    cout<<miss(arr);
    return 0;
}


