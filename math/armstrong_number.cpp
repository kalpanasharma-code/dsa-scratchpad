#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    if (num == 0)
        return 1;

    int cnt = 0;
    while (num) {
        cnt++;
        num /= 10;
    }
    return cnt;
}

bool isArmstrong(int num, int digits) {
    if (num >= 0 && num < 10)
        return true;

    int ans = 0;
    int temp = num;

    while (temp) {
        int rem = temp % 10;
        ans += (int)pow(rem, digits);
        temp /= 10;
    }

    return ans == num;
}

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;

    if (num < 0) {
        cout << "enter valid input.";
        return 0;
    }

    int digits = countDigits(num);

    if (isArmstrong(num, digits))
        cout << "number is armstrong number.";
    else
        cout << "not armstrong number.";

    return 0;
}
