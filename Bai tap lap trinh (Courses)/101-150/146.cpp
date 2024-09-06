//Viết chương trình in ra tất cả mật khẩu từ một tập các kí tự.
//Các kí tự trong tập hợp có thể không được dùng lần nào hoặc nếu dùng thì mỗi kí tự chỉ được dùng 1 lần.
#include <bits/stdc++.h>
using namespace std;


void printKey(int n, string s, string &ans){
    int x = s.size();
    if(x==0){
        cout<<ans<<endl;
        return;
    }

    
    for(int i=0; i<x; i++){

        int t = ans.size();
        if(t == n){
            cout<<ans<<endl;
            return;
        }

        ans += s[i];
        string tmp = s;
        s.erase(i, 1);
        printKey(n, s, ans);
        s = tmp;
        ans.pop_back();
    }
}


int main(){
    int n; cin>>n;
    string s; cin>>s;
    string ans = "";
    int x = s.size();
    if(x<n) n = x;
    for(int i=1; i<=n; i++)
        printKey(i, s, ans);
}