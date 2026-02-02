#include <iostream>
#include <vector>
using namespace std;

vector<int> search(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            int left = mid;
            int right = mid;

            while (left - 1 >= 0 && arr[left - 1] == target) {
                left--;
            }

            while (right + 1 < n && arr[right + 1] == target) {
                right++;
            }

            return {left, right};
        }

        if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return {-1, -1};
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    vector<int> result = search(arr, n, target);

    cout << "First position: " << result[0] << endl;
    cout << "Last position: " << result[1] << endl;

    return 0;
}
