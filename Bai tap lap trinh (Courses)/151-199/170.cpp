#include <bits/stdc++.h>
using namespace std;

struct Time {
    int h; int m; int s;

    Time(int h_=0, int m_=0, int s_=0){
        h=h_; m=m_; s=s_;
    }

    int second() {
        return h*3600+m*60+s;
    }
    
    void print() {
        cout<< ((h<10) ? "0" : "") << h << ":" 
            << ((m<10) ? "0" : "") << m << ":" 
            << ((s<10) ? "0" : "") << s << endl;
    }
};

Time normalize(int h, int m, int s) {
    Time newTime;

    if(s >= 60) { m+=s/60; s = s%60; }
    if(m >= 60) { h+=m/60; m = m%60; }
    if(h >= 24) h = h%24;

    newTime.s = s;
    newTime.m = m;
    newTime.h = h;

    return newTime;
}

int main(){
    normalize(9, 59, 60).print();
}