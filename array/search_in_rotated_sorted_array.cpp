#include<iostream>
using namespace std;

int search_element(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Left side sorted
        if (arr[start] <= arr[mid]) {

            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;      // move left
            }
            else {
                start = mid + 1;    // move right
            }
        }
        // Right side sorted
        else {

            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;    // move right
            }
            else {
                end = mid - 1;      // move left
            }
        }
    }

    return -1;
}
