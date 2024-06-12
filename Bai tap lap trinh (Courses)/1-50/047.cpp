//In số trung vị

#include <bits/stdc++.h>
using namespace std;


int main() {
    string filePath;
    cin >> filePath;

    ifstream file(filePath);
    if (!file.is_open()) {
        return -1;
    }

    vector<float> number;
    float t;
    while(file>>t)
    {
        number.push_back(t);
    }
        
    sort(number.begin(), number.end());
    int n = number.size();
    if(n%2) cout<<number[n/2]<<endl;
    else cout<<(number[n/2]+number[n/2-1])/2<<endl;


    file.close();
    return 0;
}
