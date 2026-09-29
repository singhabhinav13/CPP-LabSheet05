// 17. Write a program to display all perfect numbers between 1 and 1000.
#include <iostream>
using namespace std;
int main() {
    for (int n = 1; n <= 1000; n++) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) sum += i;
        if (sum == n) cout << n << " ";
    }
    return 0;
}
