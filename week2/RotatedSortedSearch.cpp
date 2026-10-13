#include <iostream>
#include <vector>
using namespace std;

int RotatedSortedSearch(vector<int>& arr, int target) {

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        // Target found
        if (arr[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if (arr[left] <= arr[mid]) {

            // Target lies in the sorted left half
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        // Right half is sorted
        else {

            // Target lies in the sorted right half
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};

    int target = 3;

    int result = RotatedSortedSearch(arr, target);

    if (result == -1) {
        cout << "Target is not found in the array.";
    }
    else {
        cout << "Target is present at : " << result;
    }

    return 0;
}