#include <iostream>
using namespace std;

int main() {
    int num;
    int place = 1;
    int ans = 0;

    cout << "Enter binary number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;   // extract binary digit
        ans += digit * place;
        place *= 2;
        num /= 10;
    }

    cout << ans << " is your decimal number.";
    return 0;
}
