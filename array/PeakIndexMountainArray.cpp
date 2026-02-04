#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // increasing part
            start = mid + 1;
        } else {
            // decreasing part or peak
            end = mid;
        }
    }

    return start; // peak index
}
