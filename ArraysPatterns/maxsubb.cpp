#include <iostream>
#include <vector>
using namespace std;

int maxsubarr(vector<int> arr){
    int currsum = 0;
    int maxsum = 0;
    for (int i=0; i<arr.size(); i++){
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum<0){
            currsum = 0;
        }
    }
    return maxsum;
}
int main() {

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxsubarr(arr);

    cout << "Maximum subarray sum = " << result;

    return 0;
}