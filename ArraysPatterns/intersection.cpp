#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersec(vector<int> arr1, vector<int> arr2) {
    unordered_map<int, int> freq;
    for (int i=0; i<arr1.size(); i++){
        freq[arr1[i]]++;
    }
    vector<int> result;
    for (int i=0; i<arr2.size(); i++){
        if (freq[arr2[i]]>0){
            result.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }
    return result;
}
int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 4, 5};

    vector<int> result = intersec(arr1, arr2);

    cout << "Intersection: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}