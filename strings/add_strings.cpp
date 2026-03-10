#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ; 

string add(string num1 , string num2){
    
    int index1 = num1.size()-1 ;
    int index2 = num2.size()-1 ;

    int carry = 0 ;
    string ans = "" ;

    while(index2 >= 0){
        int sum = (num1[index1]-'0') + (num2[index2]-'0') + carry ;

        carry = sum/10 ;

        ans += (sum%10) + '0' ;

        index1--;
        index2--;
    }

    while(index1 >= 0){
        int sum = (num1[index1]-'0') + carry ;

        carry = sum/10 ;

        ans += (sum%10) + '0' ;

        index1--;
    }

    if(carry){
        ans += carry + '0';
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

    string num1 = "12345";
    string num2 = "345";

    if(num1.size() > num2.size()){
        cout << add(num1 , num2);
    }
    else{
        cout << add(num2 , num1);
    }

}