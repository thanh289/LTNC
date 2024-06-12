#include <bits/stdc++.h>
using namespace std;
/*
    5,5,8,12,15,18
*/
int main()
{
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp;
    float tb = 0, ps = 0;
    vector<float> v;
    int cnt = 0;
    while(ss >> tmp)
    {
        float number = 0;
        int m = tmp.size();
        for(int i = 0; i < m; i++){
            if(tmp[i] <= 57  && tmp[i] >= 48){
                number = number * 10;
                number += float(tmp[i] - '0');
            }
        }
        tb += number;
        v.push_back(number);
        cnt++;
    }
    tb /= cnt * 1.0;
    for(int i = 0; i < cnt; i++){
        ps += (tb - v[i]) * (tb - v[i]);
    }
    ps /= cnt;
    cout << fixed << setprecision(1) << tb << endl;
    cout << fixed << setprecision(2) << ps << endl;
}