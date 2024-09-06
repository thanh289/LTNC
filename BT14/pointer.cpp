#include <bits/stdc++.h>
using namespace std;

void alo(){
    int a = 10;    //0x1000
    int b = 20;    //0x1004
    int c = 30;    //0x1008
    int sum = 0;   //0x100c

    int *pA = &a;   //0x1010
    int *pB = &b;   //0x1014
    int *pInt;      //0x1018

    int **ppInt = &pInt;    //0x101c

    (*ppInt) = pA;
    sum += (**ppInt);

    (*ppInt) = pB;
    sum += *pInt;

    *ppInt = &c;    //0x1008
    sum += (**ppInt);
    
    printf("Sum is %d\n", sum);

    cout<<(pInt+1)<<endl;

    cout<<&sum<<endl;
}

int main(){
    alo();
}
/*

+) &sum = 0x100c, sum = 60; No exist i*sum và **sum

+) a+1 = 11 ; No exist &(a+1), *(a+1), **(a+1)

+) &pA = 0x1010, pA = 0x1000, *pA = 10; NO exist **pA

+) (pA+1)= 0x1014, *(pA+1) = random number;  No exist &(pA+1), **(pA+1)

+) &pInt = 0x1018, pInt = 0x1008(địa chỉ của c), *pInt = 30; No exist **pInt; 

+) pInt+1 = 0x1004, *(pInt+1) = 20 ; NO exist &(pInt+1)
 
+) **(ppInt+1) = random
*/
