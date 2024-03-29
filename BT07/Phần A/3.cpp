#include <bits/stdc++.h>
using namespace std;

int count_even(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {9, 2, 1, 6, 8, 3, 1, 5, 2, 4};
    cout<<count_even(arr, 5) << endl;
    cout<<count_even(arr + 5, 5) << endl;
    return 0;
}
