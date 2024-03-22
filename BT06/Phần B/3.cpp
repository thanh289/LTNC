#include <bits/stdc++.h>
using namespace std;


void cube(int i) { 
		   i = i * i * i; 
		}


int main()
{
    int count = 0;
    for (int i = 0; i < 1000; i++) 
    {
        cube(i);
        count++;
    }

    cout<<count<<endl; //1000
    //i không hề được tăng do truyền bằng tham trị
	   
}