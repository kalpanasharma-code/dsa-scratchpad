#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;

    vector<int> lowercase(26, 0), uppercase(26, 0);

    // Counting characters
    for(int i = 0; i < s.size(); i++) {

        if(s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';
            lowercase[index]++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            int index = s[i] - 'A';
            uppercase[index]++;
        }
    }

    int count = 0;
    bool odd = false;

    // Calculate palindrome length
    for(int i = 0; i < 26; i++) {

        // lowercase
        if(lowercase[i] % 2 == 0) {
            count += lowercase[i];
        } 
        else {
            count += lowercase[i] - 1;
            odd = true;
        }

        // uppercase
        if(uppercase[i] % 2 == 0) {
            count += uppercase[i];
        } 
        else {
            count += uppercase[i] - 1;
            odd = true;
        }
    }

    // If any odd exists, we can place one in center
    if(odd)
        count += 1;

    cout << "Longest Palindrome Length: " << count;

    return 0;
}