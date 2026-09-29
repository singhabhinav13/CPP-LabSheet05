// 28. Write a program to display the sum of series: 1 + 2 + 3 + ... + N.
#include <iostream>
using namespace std;
int main() {
    int N;
    long long sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) sum += i;
    cout << "Sum = " << sum;
    return 0;
}
