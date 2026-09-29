// 21. Write a program to find the sum of all even and odd digits in a given number.
#include <iostream>
using namespace std;
int main() {
    int n, evenSum = 0, oddSum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) evenSum += d;
        else oddSum += d;
        n /= 10;
    }
    cout << "Sum of even digits = " << evenSum << endl;
    cout << "Sum of odd digits = " << oddSum;
    return 0;
}
