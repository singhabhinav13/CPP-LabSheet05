// 15. Write a program to display Armstrong numbers between 1 and 500.
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 500; i++) {
        int temp = i, sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += d * d * d;   // all numbers up to 500 have at most 3 digits
            temp /= 10;
        }
        // handle 1 and 2 digit numbers correctly
        int digits = 0, t = i;
        while (t > 0) { digits++; t /= 10; }
        sum = 0; temp = i;
        while (temp > 0) {
            int d = temp % 10, p = 1;
            for (int k = 0; k < digits; k++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == i) cout << i << " ";
    }
    return 0;
}
