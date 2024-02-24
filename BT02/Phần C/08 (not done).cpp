#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();

    int ans = 0; 
    int dif_time_gr= 1;
    int conti_char = 1;

    for(int i=1; i<n; i++){
        while(s[i] == s[i-1] && i<n){
            conti_char++;
            i++;
        }
        
        if(conti_char > 1)
            ans++;
       
        conti_char = 1;
        if(i<n)
            dif_time_gr ++;    

    }

    for(int i=1; i<dif_time_gr; i++)
        ans += i;

    cout<<ans<<endl;
}

//abbaababbaedbac
//67

//abccdeadbghzzbvbaaab
