// 22. Write a program to check whether a given number is Harshad number.
#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << (n % sum == 0 ? "Harshad number" : "Not a Harshad number");
    return 0;
}
