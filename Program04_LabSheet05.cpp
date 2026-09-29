// 4. Write a program to display even numbers between 1 and 20, skipping multiples of 4 (continue).
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) continue;
        if (i % 4 == 0) continue;
        cout << i << " ";
    }
    return 0;
}
