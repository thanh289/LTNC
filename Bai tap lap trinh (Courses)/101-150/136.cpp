#include <bits/stdc++.h>
using namespace std;


string multiplyString(string num1, string num2){

    int len1 = num1.size(), len2 = num2.size();
    if(len1 == 0 || len2 == 0) 
        return "0";

    vector<int> result(len1+len2, 0);

    int i_1 = 0, i_2 = 0;

    for(int i=len1-1; i>=0; i--){
        int remain = 0;
        i_2 = 0;
        int n1 = num1[i] - '0';

        for(int j=len2-1; j>=0; j--){
            int n2 = num2[j] - '0';

            int sum = n1*n2 + result[i_1+i_2] + remain;

            result[i_1+i_2] = sum%10;
            remain = sum/10;

            i_2++;
        }
        if(remain>0) result[i_1+i_2] += remain;

        i_1++;
    }

    

    int index = result.size() - 1;
    while(result[index] == 0 && index>=0) index--;
    if(index == -1) return "0";

    string ans = "";
    for(int i=index; i>=0; i--)
        ans += result[i] + '0';
    

    return ans;
}



int main(){
    string x1, x2; cin>>x1>>x2;
    string ans = multiplyString(x1, x2);
    cout<<ans<<endl;
}