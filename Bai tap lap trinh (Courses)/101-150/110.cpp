//In ra gpa

#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin>>n;
    if(n>=3.6){
        cout<<"Xuat sac"<<endl;
    }else if(n>=3.2){
        cout<<"Gioi"<<endl;
    }else if(n>=2.5){
        cout<<"Kha"<<endl;
    }else if(n>=2.0){
        cout<<"Trung binh"<<endl;
    }else{
        cout<<"Khong ra duoc truong"<<endl;
    }
}