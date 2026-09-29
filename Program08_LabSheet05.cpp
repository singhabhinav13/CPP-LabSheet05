// 8. Write a program to print multiplication table for a given number, but stop when the product exceeds 50.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        int p = n * i;
        if (p > 50) break;
        cout << n << " x " << i << " = " << p << endl;
    }
    return 0;
}
