#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string firstName;
    string lastName;
    int standard;
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    Student a;
    cin>>a.age>>a.firstName>>a.lastName>>a.standard;
    
    cout<<a.age<<" "<<a.firstName<<" "<<a.lastName<<" "<<a.standard;
    return 0;
}
