#include <bits/stdc++.h>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 20;
    cout<<p<<endl; //0xf37f58
    cout<<p2<<endl; //0xf37f58
    cout<<*p2<<endl; //20
    delete p; 
    cout<<p2<<endl; //0xf37f58
    cout<<*p2<<endl; //15956704
    *p2 = 100;
    cout << *p2;//100
    delete p2;

    //sau khi xóa p, chương trình bị treo, đồng thời p2 bị gán cho một giá trị ngẫu nhiên
    //vì sau khi giải phóng p làm cho con trỏ p2 chỉ vào vùng nhớ không còn hiệu lực
}