// 3. Write a program to search for a number in a sequence; stop searching if found (break).
#include <iostream>
using namespace std;
int main() {
    int n, key, found = 0;
    cout << "Enter size: ";
    cin >> n;
    int a[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Found at position " << i + 1;
            found = 1;
            break;
        }
    }
    if (!found) cout << "Not found";
    return 0;
}
