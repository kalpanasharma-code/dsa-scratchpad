#include<iostream>
#include<climits>
using namespace std;

int water_stored(int arr[], int n) {

    int max_height = INT_MIN, index = -1, water = 0;

    // find global max
    for(int i = 0; i < n; i++){
        if(arr[i] > max_height){
            max_height = arr[i];
            index = i;
        }
    }

    // left side
    int left_max = 0;
    for(int i = 0; i < index; i++){
        left_max = max(left_max, arr[i]);
        water += left_max - arr[i];
    }

    // right side
    int right_max = 0;
    for(int i = n-1; i > index; i--){
        right_max = max(right_max, arr[i]);
        water += right_max - arr[i];
    }

    return water;
}