// 18. Write a program to check whether a number is strong number.
#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        int d = temp % 10, f = 1;
        for (int i = 1; i <= d; i++) f *= i;
        sum += f;
        temp /= 10;
    }
    cout << (sum == n ? "Strong number" : "Not a strong number");
    return 0;
}
