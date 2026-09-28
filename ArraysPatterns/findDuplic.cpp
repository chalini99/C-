#include <iostream>
#include <vector>
using namespace std;

void findduplic(vector<int> arr){
    int freq[100]={0};
    for (int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    for (int i=0; i<100;i++){
        if (freq[i]>1){
            cout<<i<<" ";

        }
    }

}
int main() {

    vector<int> arr = {1, 2, 3, 2, 4, 1, 5};

    findduplic(arr);

    return 0;
}