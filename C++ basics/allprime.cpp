#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;  
    for(int i = 2; i * i <= n; i++) {  
        if(n % i == 0) return false;  
    }
    return true;  
}

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: " << endl;

    for(int i = 2; i <= N; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
