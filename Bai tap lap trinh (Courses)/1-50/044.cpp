//Gộp 2 vector

#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b){
    vector<int> c;
    int na = a.size()-1, nb = b.size()-1;
    while(na>=0 && nb>=0){
        if(a[na] <= b[nb]){
            c.push_back(a[na]);
            na--;
        }
        else{
            c.push_back(b[nb]);
            nb--;
        }
    }
    
    if(na>=0){
        while(na>=0){
            c.push_back(a[na]);
            na--;
        }
    }
    
    if(nb>=0){
        while(nb>=0){
            c.push_back(b[nb]);
            nb--;
        }
    }
    
    return c;
}