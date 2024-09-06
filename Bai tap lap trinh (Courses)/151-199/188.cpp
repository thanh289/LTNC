#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    map<int, int> count;
    vector<int> number;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(count[x] == 0) number.push_back(x);
        count[x]++;
    }
    

    sort(number.begin(), number.end());

    int t = number.size();
    int l = 0, r = t-1;
    while(l<r){
        if(number[l] + number[r] == 0){
            int time = count[number[l]] * count[number[r]];
            while(time--)
                cout<<number[l]<<" "<<number[r]<<endl;
            l++; r--;
        }
        else if(number[l] + number[r] < 0) l++;
        else r--;
    }

}