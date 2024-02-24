#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

    cout<<"12 midnight"<<endl;
    string time = "am";

    for(int i=1; i<=11; i++){
        cout<<i<<time<<endl;

        if(i==11 && time == "am"){
            cout<<"12 midnight"<<endl;
            time = "pm";
            i=0;
        }
    }

    return 0;
}