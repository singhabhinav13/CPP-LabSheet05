// 26. Write a program to find LCM of two numbers using loops.
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int lcm = (a > b) ? a : b;
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) break;
        lcm++;
    }
    cout << "LCM = " << lcm;
    return 0;
}
