#include<iostream>
#include<climits>
using namespace std ; 
 
int max_difference(int arr[], int n) {
    int maxi = arr[n-1];
    int ans = INT_MIN;

    for(int i = n-2; i >= 0; i--) {
        ans = max(ans, maxi - arr[i]);
        maxi = max(maxi, arr[i]);
    }

    return ans;


}