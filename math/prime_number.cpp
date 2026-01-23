#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num < 2) {
        cout << "Not a prime number";
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not a prime number";
            return 0;
        }
    }

    cout << "Given number is prime";
    return 0;
}
