#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(int n, int m, string prefix = "") {
    if (n == 0 && m == 0) {
        cout << prefix << std::endl;
        return;
    }
    if (n > 0) 
        generateBinaryStrings(n - 1, m, prefix + "0");
    
    if (m > 0) 
        generateBinaryStrings(n, m - 1, prefix + "1");
    
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    generateBinaryStrings(n, m);

    return 0;
}
