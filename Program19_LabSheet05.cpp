// 19. Write a program to display all strong numbers between 1 and 500.
#include <iostream>
using namespace std;
int main() {
    for (int n = 1; n <= 500; n++) {
        int temp = n, sum = 0;
        while (temp > 0) {
            int d = temp % 10, f = 1;
            for (int i = 1; i <= d; i++) f *= i;
            sum += f;
            temp /= 10;
        }
        if (sum == n) cout << n << " ";
    }
    return 0;
}
