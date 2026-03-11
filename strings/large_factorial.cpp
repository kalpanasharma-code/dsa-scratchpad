#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num < 0){
        cout << "Enter valid number";
        return 0;
    }

    if(num == 0 || num == 1){
        cout << 1;
        return 0;
    }

    vector<int> ans;
    ans.push_back(1);

    while(num > 1){

        int carry = 0;

        for(int i = 0; i < ans.size(); i++){

            int res = num * ans[i] + carry;

            ans[i] = res % 10;
            carry = res / 10;
        }

        while(carry){
            ans.push_back(carry % 10);
            carry = carry / 10;
        }

        num--;
    }

    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i];

}