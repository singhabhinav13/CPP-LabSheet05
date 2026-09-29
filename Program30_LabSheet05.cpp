// 30. Write a program to display the sum of series: 1^3 + 2^3 + 3^3 + ... + N^3.
#include <iostream>
using namespace std;
int main() {
    int N;
    long long sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) sum += (long long)i * i * i;
    cout << "Sum = " << sum;
    return 0;
}
