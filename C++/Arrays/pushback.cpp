#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;  

    nums.push_back(3);
    nums.push_back(7);
    nums.push_back(1);

    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}
