#include<iostream>
#include<vector>
using namespace std ;
 
int main (){
    vector<vector<int> > arr (4 , vector<int>(4 , 1)) ;
    int row = arr.size() ;
    int col = arr[0].size() ;
    int n = arr.size() ;
   for(int j = 0 ; j < col ; j++){
        for(int i = 0 ; i < row ; i++){
            if(j%2 == 0){
          cout<<arr[i][j] ;
        }

        else cout<< arr[n-i-1][j] ;
        }
    
     
   }
}