#include<iostream>
#include<vector>
using namespace std ; 
  vector<int> two_sum(int arr[] , int n , int target){
        int start = 0 , end = n -1  ;
        while (start<end)
        {
            if(arr[start] + arr[end] == target){
                return {start , end } ;
            }

            else if(arr[start] + arr[end] > target){
                end -- ;
            }

            else start ++ ;
        }

        

  }
