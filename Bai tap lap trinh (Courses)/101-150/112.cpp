#include <bits/stdc++.h>
using namespace std;


int main(){
    float a1, b1, d1, a2, b2, d2;
    cin>>a1>>b1>>d1>>a2>>b2>>d2;

    if(a1/a2 == b1/b2 && a1/a2 == d1/d2){
        cout<<"Vo so nghiem"<<endl;
        return 0;
    }

    if((a1==0 && a2==0 && (b1!=b2 || d1!=d2)) || (b1==0 && b2==0 && (a1!=a2 || d1!=d2)) || (d1==0 && d2==0 && (a1!=a2 || b1!=b2))){
        cout<<"Vo nghiem"<<endl;
        return 0;
    }
    
    if(a1/a2 == b1/b2 && a1/a2 != d1/d2){
        cout<<"Vo nghiem"<<endl;
        return 0;
    }
    
    float time = b1/b2;
    double x = (d1-time*d2)/(a1-time*a2);
    double y = (d1-a1*x)/b1;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    
}