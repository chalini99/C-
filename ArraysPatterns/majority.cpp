#include <iostream>
#include <vector>
using namespace std;

int majority(vector<int> arr){
    int candidate = 0;
    int count=0;
    for (int i=0; i<arr.size(); i++){
        if (count==0){
            candidate = arr[i];

        }
        if (arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}
int main() {

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    int result = majority(arr);

    cout << "Majority element = " << result;

    return 0;
}