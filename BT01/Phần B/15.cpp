//Từ Fibonacci. Viết chương trình FibonacciWord.cpp in ra các từ Fibonacci từ 0 đến 10. 
//Biết rằng f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab", f(4) = "babba", tổng quát là f(n) = f(n-1) + f(n-2). 
//Hãy dùng phép cộng đối với string (chẳng hạn f2 = f1 + f0).


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

    string f0, f1, f2;
    cin>>f0>>f1;

    cout<<"f(0) = "<<f0<<endl;
    cout<<"f(1) = "<<f1<<endl;

    for(int i=2; i<=10; i++){
        f2 = f1 + f0;
        cout<<"f("<<i<<") = "<<f2<<endl;
        f0 = f1;
        f1 = f2;

    }
}