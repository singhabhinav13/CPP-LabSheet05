// 5. Write a program to simulate a menu-driven calculator with default in switch.
#include <iostream>
using namespace std;
int main() {
    float a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0) cout << a / b;
            else cout << "Division by zero!";
            break;
        default: cout << "Invalid operator";
    }
    return 0;
}
