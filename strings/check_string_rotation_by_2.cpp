#include <iostream>
#include <string>
using namespace std;

// Rotate clockwise by one position
void rotateClockwiseByOne(string &s) {
    int n = s.size();
    if (n <= 1) return;

    char last = s[n - 1];

    for (int i = n - 1; i > 0; i--) {
        s[i] = s[i - 1];
    }

    s[0] = last;
}

// Rotate anticlockwise by one position
void rotateAntiClockwiseByOne(string &s) {
    int n = s.size();
    if (n <= 1) return;

    char first = s[0];

    for (int i = 0; i < n - 1; i++) {
        s[i] = s[i + 1];
    }

    s[n - 1] = first;
}

// Check if s2 is rotation of s1 by exactly two positions
bool rotation_by_two(string s1, string s2) {

    if (s1.size() != s2.size())
        return false;

    string cw = s1;
    string acw = s1;

    // Rotate twice clockwise
    rotateClockwiseByOne(cw);
    rotateClockwiseByOne(cw);

    // Rotate twice anticlockwise
    rotateAntiClockwiseByOne(acw);
    rotateAntiClockwiseByOne(acw);

    return (cw == s2 || acw == s2);
}

int main() {

    string s1 = "amazon";
    string s2 = "azonam";

    if (rotation_by_two(s1, s2))
        cout << "Yes, it is rotation by two positions.";
    else
        cout << "No, it is not rotation by two positions.";

    return 0;
}