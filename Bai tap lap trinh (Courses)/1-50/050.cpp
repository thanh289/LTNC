#include <bits/stdc++.h>
using namespace std;

int main(){
    string inputFile;
    cin>>inputFile;
    ifstream file(inputFile);

    map<string, int> count;
    string line;

    while(file>>line){
        int n = line.size();
        for(int i=0; i<n; i++){
            if(line[i] == ','){
                string name = "";
                for(int j=i+1; j<n; j++){
                    if(line[j]=='@') break;
                    name += line[j];
                }
                count[name]++;
            }
        }
    }

    file.close();

    for(auto& x : count){
        if(x.second >= 2)
            cout<<x.first<<endl;
    }
}