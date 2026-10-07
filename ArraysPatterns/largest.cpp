#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int largest(vector<int> arr){
    int largest = INT_MIN;
    for (int num: arr){
        if (num>largest){
            largest = num;
        }
    }
    return largest;

}
int main(){
    vector<int> arr =  {12, 35, 1, 10, 34, 1};

    cout << "Largest = " << largest(arr);

    return 0;
}
