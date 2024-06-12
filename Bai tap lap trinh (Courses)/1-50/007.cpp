//Palindrome

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    string newS = "";
    string ans = "";
    for(int i=n-1; i>=0; i--)
        newS += s[i];
    ans = s + newS;
    cout<<ans<<endl;
}