#include <bits/stdc++.h>
using namespace std;

const int MAX = 100009;
int number[MAX];

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin>>number[i];

    sort(number, number + n);

    bool success = false;
    for(int i=0; i<n-1; i++){
        if(number[i] == number[i+1]){
            success = true;
            break;
        }
    }

    if(success) cout<<"Yes";
    else cout<<"No";
}