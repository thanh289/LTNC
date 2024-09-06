//Viết chương trình sinh ra tất cả mật khẩu từ một tập các kí tự. Các kí tự trong tập hợp có thể không được dùng lần nào hoặc dùng nhiều lần.

#include <bits/stdc++.h>
using namespace std;


void generateString(int n, string s, string prefix = ""){
    
    int x = prefix.size();
    if(x==n){
        cout<<prefix<<endl;
        return;
    }

    int t = s.size();
    for(int i=0; i<t; i++){
        prefix += s[i];
        generateString(n, s, prefix);
        prefix.pop_back();
    }
}


int main(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i=1; i<=n; i++){
        generateString(i, s);
    }

}