#include <bits/stdc++.h>
using namespace std;


struct myString
{
    int n;
    char* str;


    myString(const char* s);
    ~myString();
    void print();
    void append(const char* otherStr);
};

myString::myString(const char* s)
{
    n = strlen(s);
    str = new char[n+1];
    strcpy(str, s);
}

myString::~myString()
{
    delete[] str;
}

void myString::print()
{
    cout<<str<<endl;
}

void myString::append(const char* otherStr)
{
    int len1 = strlen(str);
    int len2 = strlen(otherStr);

    char *temp = new char[len1 + len2 + 1];

    strcpy(temp, str);           
    strcat(temp, otherStr);             
    delete[] str;            

    str = temp;                 
    n = len1 + len2;      
}

int main()
{
    myString string1("helo");

    cout<<"Length of string: "<<string1.n<<endl;
    cout<<"String name: ";
    string1.print();

    string1.append(" world");
    cout<<"Length after append: "<<string1.n<<endl;
    cout<<"New string name: ";
    string1.print();
    
}