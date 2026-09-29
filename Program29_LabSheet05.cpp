// 29. Write a program to display the sum of series: 1^2 + 2^2 + 3^2 + ... + N^2.
#include <iostream>
using namespace std;
int main() {
    int N;
    long long sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) sum += i * i;
    cout << "Sum = " << sum;
    return 0;
}
