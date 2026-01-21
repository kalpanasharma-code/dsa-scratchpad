// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    bool UniqueOccurance(int arr[], int n) {
        int occurance[1000] = {0};
        int occurred = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == INT_MIN)
                continue;

            int freq = 0;
            for (int j = i; j < n; j++) {
                if (arr[i] == arr[j]) {
                    freq++;
                    arr[j] = INT_MIN;
                }
            }
            occurance[occurred++] = freq;
        }

        // check uniqueness of frequencies
        for (int i = 0; i < occurred; i++) {
            for (int j = i + 1; j < occurred; j++) {
                if (occurance[i] == occurance[j])
                    return false;
            }
        }
        return true;
    }
};

