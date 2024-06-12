//Viết chương trình đọc từ tệp tin các số nguyên dương, 
//sau đó sắp xếp các chữ số của số nguyên dương n theo thứ tự tăng dần.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string inputFile; cin>>inputFile;

    fstream file(inputFile);
    int n; file>>n;
    for(int i=1; i<=n; i++){
        string s; file>>s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }
}