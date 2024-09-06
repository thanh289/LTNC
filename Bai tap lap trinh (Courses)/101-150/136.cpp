//Nhân 2 string
#include <bits/stdc++.h>
using namespace std;

string multiplyString(string s1, string s2){
    int n1 = s1.size();
    int n2 = s2.size();

    if(n1==0 || n2==0) return "0";

    vector<int> result(n1+n2+1, 0);

    int i1 = 0;
    for(int i=n1-1; i>=0; i--){
        int remain = 0;
        int i2 = 0;
        for(int j=n2-1; j>=0; j--){ 
            int sum = (s1[i]-'0') * (s2[j]-'0') +  result[i1+i2] + remain;
            remain = sum/10;
            result[i1+i2] = sum%10;
            i2++;
        }
        if(remain>0) result[i1+i2] += remain;
        i1++;
    }

    int i = result.size()-1;
    while(result[i]==0 && i>0) i--;
    if(i==-1) return "0";

    string ans = "";
    while(i>=0){
        ans += to_string(result[i--]);
    }

    return ans;

}

int main(){
    string s1, s2; cin>>s1>>s2;
    string ans = multiplyString(s1, s2);
    cout<<ans<<endl;
}