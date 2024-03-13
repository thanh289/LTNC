#include <bits/stdc++.h>
using namespace std;

int arr[3][4];

int main() {
    

    for (int j = 0; j < 6; ++j) {
        arr[0][j] = j + 1;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//số 5, 6 bị tràn xuống dòng dưới