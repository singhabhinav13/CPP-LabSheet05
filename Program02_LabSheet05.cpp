// 2. Write a program to print numbers from 1 to 10, but stop at 7 using break.
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) break;
        cout << i << " ";
    }
    return 0;
}
