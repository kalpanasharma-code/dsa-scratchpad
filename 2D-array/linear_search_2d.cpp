#include<iostream>
#include<vector>
using namespace std ;
 
vector<int> find(int arr[][4], int row, int col, int key){
  
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                return {i, j};   // row, col
            }
        }
    }

    return {-1, -1};  // not found
}
