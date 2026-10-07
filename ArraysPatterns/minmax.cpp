#include <iostream>
#include <vector>
using namespace std;

void minmax(vector<int> arr){
    int max = arr[0];
    int min = arr[0];
    for (int i=0; i<arr.size(); i++){
        if (arr[i]> max){
            max=arr[i];
        }
        if (arr[i]<min){
            min = arr[i];

        }
    }
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
}
int main() {

    vector<int> arr = {7, 2, 9, 4, 1, 6};

    minmax(arr);

    return 0;
}