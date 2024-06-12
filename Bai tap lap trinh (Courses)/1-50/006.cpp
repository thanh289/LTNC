//Tính S biết 3 cạnh

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    
    if(a<=0 || b<=0 || c<=0 || a>=b+c || b>=a+c || c>=a+b) {
        cout<<"invalid"<<endl;
        return 0;
    }
    float p = (a + b + c) / 2;
    float res = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << res << endl;

}