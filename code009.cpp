#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void generatePrimes(int n) {
    int count = 0;
    for (int num = 2; count < n; num++) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of prime numbers to find: ";
    cin >> n;
    cout << "The first " << n << " prime numbers are: ";
    generatePrimes(n);
    return 0;
}
