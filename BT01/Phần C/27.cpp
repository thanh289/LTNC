#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

    int N; 
    while(true)
    {
        cin>>N;
        if(N==-1){
            cout<<"Bye";
            break;
        }

        if(N%5) cout<<N%5<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}