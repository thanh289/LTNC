#include <bits/stdc++.h>
using namespace std;

int main(){
   string s1; cin>>s1;
   int n = s1.size();

   string s2= "";
    for(int i=n-1; i>=0; i--)
        s2 += s1[i];

    if(s1 == s2)
        cout<<"Yes";
    else cout<<"No";

    return 0;
}