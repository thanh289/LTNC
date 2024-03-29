#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (right + left) / 2;

        if (arr[mid] == target)
            return mid; 
        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {11,12,13,14,15,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int result = binarySearch(arr, n, target);
    cout<<result<<endl;
    return 0;
}
