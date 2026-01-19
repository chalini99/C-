#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 7, 98, 45};
    int maxVal = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > maxVal) 
          maxVal = arr[i];
    }

    cout << "Largest element = " << maxVal << endl;
    return 0;
}
