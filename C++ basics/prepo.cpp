#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "x = " << x << endl;
    cout << "Pre-increment: " << ++x << endl;  // increases first
    cout << "Post-increment: " << x++ << endl; // prints then increases
    cout << "Final x = " << x << endl;
    return 0;
}
