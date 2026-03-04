#include<iostream>
#include<string>
using namespace std;

int main() {

    string s = "1.2.4.5";
    string ans;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '.') {
            ans += "[.]";
        }
        else {
            ans += s[i];
        }
    }

    cout << ans;
}