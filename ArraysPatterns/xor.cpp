#include <iostream>
#include <vector>
using namespace std;

int findsingleno(vector<int> arr){
    int result = 0;
    for (int i=0; i<arr.size(); i++){
        result = result^arr[i];
    }
    return result;
}
int main() {

    vector<int> arr = {4, 1, 2, 1, 2};

    int result = findsingleno(arr);

    cout << "Single number = " << result;

    return 0;
}