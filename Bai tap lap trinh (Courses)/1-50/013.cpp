//Đổi hệ 10 sang hệ 2

#include <bits/stdc++.h>
using namespace std;


string decimal_to_binary(int number)
{
    string ans = "";
    while(number > 0){
        if(number % 2)
            ans = '1'  + ans;
        else 
            ans = '0' + ans;
            
        number /= 2;
    }
    
    return ans;
}