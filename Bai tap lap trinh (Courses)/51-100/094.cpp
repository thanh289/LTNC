#include <bits/stdc++.h>
using namespace std;

bool isValid(string x){
    int n = x.size();
    for(int i=1; i<n; i++){
        if(isupper(x[i])) return false;
    }
    
    return n>=2 && isupper(x[0]);
}

int main(){
    string inputFile;
    cin>>inputFile;
    ifstream file(inputFile);

    int n; file>>n;
    file.ignore();

    int ans = 0;

    string line;
    while(file>>line){
        stringstream ss(line);
        string word;
        while(getline(ss, word)){
            if(isValid(word)) ans++;
        }
    }

    cout<<ans<<endl;
}