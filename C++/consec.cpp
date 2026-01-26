//Given a binary array nums (containing only 0 and 1), return the maximum number of consecutive 1s in the array.
//Input: nums = [1,1,0,1,1,1]
//Output: 3
#include <iostream>
#include <vector>
using namespace std;
int maxconsc(vector<int>& n){
    int count=0, maxi=0;
    for (int i=0; i< n.size(); i++){
        if (n[i] == 1){
            count++;
            maxi = max(maxi, count);
        }
        else{
            count=0;
        }

    } 
    return maxi;

}
int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << maxconsc(nums);
    return 0;
}