// 6. Write a program to check if a number is prime, terminate loop early using break.
#include <iostream>
using namespace std;
int main() {
    int n, isPrime = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) isPrime = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    cout << (isPrime ? "Prime" : "Not Prime");
    return 0;
}
