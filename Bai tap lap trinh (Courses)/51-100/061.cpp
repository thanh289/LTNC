#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n, 0));

    int num = 1;
    int rowStart = 0, rowEnd = m - 1;
    int colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Xuất phần đầu hàng từ trái sang phải
        for (int i = colStart; i <= colEnd; ++i) {
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        // Xuất phần cuối cột từ trên xuống dưới
        for (int i = rowStart; i <= rowEnd; ++i) {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        // Xuất phần cuối hàng từ phải sang trái
        if (rowStart <= rowEnd) {
            for (int i = colEnd; i >= colStart; --i) {
                matrix[rowEnd][i] = num++;
            }
            rowEnd--;
        }

        // Xuất phần đầu cột từ dưới lên trên
        if (colStart <= colEnd) {
            for (int i = rowEnd; i >= rowStart; --i) {
                matrix[i][colStart] = num++;
            }
            colStart++;
        }
    }

    // In ra ma trận xoắn ốc
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    printSpiralMatrix(m, n);

    return 0;
}
