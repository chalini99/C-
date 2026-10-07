#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int secondlargest(vector<int> arr){
    int larg = INT_MIN;
    int seclarg = INT_MIN;
    for (int num:arr){
        if(num>larg){
            seclarg = larg;
            larg = num;
        }
        else if(num>seclarg && num<larg){
            seclarg = num;
        }
    }
    return seclarg;
}
int main() {

    vector<int> arr = {12, 35, 1, 10, 34};

    int result = secondlargest(arr);

    if (result == INT_MIN) {
        cout << "No second largest element";
    }
    else {
        cout << "Second largest = " << result;
    }

    return 0;
}