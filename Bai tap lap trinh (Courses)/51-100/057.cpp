#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
    set<char> s;
    for(char c: str){
        if(s.find(c) != s.end()){
            return false;
        }else{
            s.insert(c);
        }
    }
    return true;
}

void Try(int n, string res, string s)
{
    if(n == 0){
        if(check(res)){
            cout << res << endl;
        }
        return;
    }

    for(char c:s){
        Try(n - 1, res + c, s);
    }
}
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        Try(i + 1, "", s);
    }
}