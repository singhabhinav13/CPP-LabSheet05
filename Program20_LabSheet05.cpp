// 20. Write a program to print reverse of a number and check if it's palindrome.
#include <iostream>
using namespace std;
int main() {
    int n, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reverse = " << rev << endl;
    cout << (rev == n ? "Palindrome" : "Not a palindrome");
    return 0;
}
