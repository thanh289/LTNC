#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string blank = string(2*N+1, ' ');

    int dis = 0;

    for(int i=N-1; i>=0; i--){
        blank[i] = '*';
        blank[i+dis] = '*';
        dis += 2;

        cout<<blank<<endl;
    }
}