#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> number;
    while(true){
        int x; cin>>x;
        if(x<0){
            cout<<x<<endl;
            break;
        }
        if(!number.empty() && x == number.back())
            continue;
        else{
            cout<<x<<" ";
            number.push_back(x);
        }
    }
}