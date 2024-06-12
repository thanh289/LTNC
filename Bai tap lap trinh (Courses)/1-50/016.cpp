//Rút gọn phân số -> phân số tối giản

#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void simplifyFraction(int x, int y)
{

    int tmp = UCLN(x, y);
    x /= tmp; y /= tmp;
    if(y == 1 || y == -1){
        if(x * y < 0){
            cout << "-" << abs(x) << endl;
        }else{
            cout << abs(x) << endl;
        }
    }else if(x * y < 0){
        cout << "-" << abs(x) << "/" << abs(y) << endl;
    }else{
        cout << x << "/" << y << endl;
    }
}


int main(){
    int x, y; cin>>x>>y;
    simplifyFraction(x, y);
}