// 23. Write a program to display all Harshad numbers between 1 and 100.
#include <iostream>
using namespace std;
int main() {
    for (int n = 1; n <= 100; n++) {
        int temp = n, sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (n % sum == 0) cout << n << " ";
    }
    return 0;
}
