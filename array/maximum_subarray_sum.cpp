#include<iostream>
#include<climits>
using namespace std ; 
 
 int maximum_sum(int arr[], int n) {
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++) {
        int prefix = 0;   // reset for every i

        for(int j = i; j < n; j++) {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    }

    return maxi;
}