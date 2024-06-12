//Đọc file, in ra số lượng các số, giá trị lớn nhất, giá trị nhỏ nhất và tổng của các số đó.

#include <bits/stdc++.h>
using namespace std;


void fixProblem(vector<int> a) {
    sort(a.begin(), a.end());
    int n = a.size();
    cout<<a.size()<<" ";
    cout<<a[0]<<" ";
    cout<<a[n-1]<<" ";

    int sum = 0;
    for(int i=0; i<n; i++) sum+=a[i];
    cout<<sum<<" ";

    
}

int main() {
    string filePath;
    cin >> filePath;

    ifstream file(filePath);
    if (!file.is_open()) {
        return -1;
    }

    vector<int> number;
    int t;
    while(file>>t)
    {
        number.push_back(t);
    }
        

    fixProblem(number);


    file.close();
    return 0;
}
