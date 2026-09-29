// 9. Write a program to demonstrate default case when no matching switch case exists.
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter day number (1-3): ";
    cin >> day;
    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        default: cout << "No matching case (default executed)";
    }
    return 0;
}
