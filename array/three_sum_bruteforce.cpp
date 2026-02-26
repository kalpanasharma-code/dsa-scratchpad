#include<iostream>
#include<vector>
using namespace std;

vector<int> three_sum(vector<int>& arr, int sum) {
    int n = arr.size();

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == sum) {
                    return {i, j, k};
                }
            }
        }
    }

    return {};
}

int main() {

    vector<int> nums = {23, 3, 83, 27, 99, 100, 57, 93};

    vector<int> result = three_sum(nums, 89);

    if(result.empty()) {
        cout << "No triplet found";
    } else {
        cout << "Indices: ";
        for(int idx : result) {
            cout << idx << " ";
        }
    }

    return 0;
}