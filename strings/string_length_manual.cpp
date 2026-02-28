#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "kalpna sharma ji";
    int size = 0;

    while(s[size] != '\0') {   // use single quotes as for char char comparison "" -means string 
        size++;
    }

    cout << size;
}