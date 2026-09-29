// 11. Write a program to calculate factorial of a number using while loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial = " << fact;
    return 0;
}
