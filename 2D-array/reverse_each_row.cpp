#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

 void reverseRows(vector<vector<int>>& arr) {

    int row = arr.size();
    int col = arr[0].size();

    for(int i = 0; i < row; i++){
        int start = 0, end = col - 1;

        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

