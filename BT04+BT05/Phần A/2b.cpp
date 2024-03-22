#include <bits/stdc++.h>
using namespace std;

// char a1[3] = "abcd";
// char a2[4] = "abcd";
char a3[5] = "abcd";

int main()
{
    // char b1[3] = "abcd";
    // char b2[4] = "abcd";
    char b3[5] = "abcd";

    cout<<a3<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<a3[i]<<" ";
        if(a3[i] == '\0') cout<<"0"<<endl;
    }
        

    
    return 0;
}

//initializer-string for array of chars is too long [-fpermissive]
//char a1[3] = "abcd";

//error: initializer-string for array of chars is too long [-fpermissive]
//char a2[4] = "abcd";

//error: initializer-string for array of chars is too long [-fpermissive]
//char b1[3] = "abcd";

//error: initializer-string for array of chars is too long [-fpermissive]
//char b2[4] = "abcd";