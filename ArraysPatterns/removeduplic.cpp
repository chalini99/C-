#include <iostream>
#include <vector>
using namespace std;
int removeduplic(vector<int>& arr){
    int i=0;
    int n= arr.size();
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j]; //putting the new unique element to the next psition of the list

        }
    }
    return i+1;
}
int main() {

    vector<int> arr = {1,1,2,2,3,4,4};

    int k = removeduplic(arr);

    cout << "Number of unique elements: " << k << endl;
    cout << "Unique elements: ";

    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}