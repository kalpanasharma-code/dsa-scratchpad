#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;

    if (num < 0) {
        cout << "not palindrome";
        return 0;
    }

    int ans = 0;
    int temp = num;

    while (temp) {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp /= 10;
    }

    if (ans == num)
        cout << "number is palindrome";
    else
        cout << "not palindrome";

    return 0;
}
