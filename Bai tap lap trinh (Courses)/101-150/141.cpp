#include <bits/stdc++.h>
using namespace std;


int main(){
    cout<<fixed<<setprecision(2);
    double a, b, c; cin>>a>>b>>c;
    double delta = b*b - 4*a*c;
    if(delta==0){
        double ans = -b/(2*a);
        cout<<ans<<endl;
    }

    else if(delta>0){
        double x1 = (-b+sqrt(delta)) / (2*a);
        double x2 = (-b-sqrt(delta)) / (2*a);
        
            cout<<min(x1, x2)<<endl;
            cout<<max(x1, x2)<<endl;
    }
    
    else{
        double a1 = -b/(2*a);
        double b1 = sqrt(abs(delta))/(2*a);
        double b2 = -sqrt(abs(delta))/(2*a);

        cout<<a1<<" "<<min(b1, b2)<<endl;
        cout<<a1<<" "<<max(b1, b2)<<endl;
    }
}