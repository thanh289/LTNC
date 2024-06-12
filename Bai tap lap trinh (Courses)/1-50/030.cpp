#include <bits/stdc++.h>
using namespace std;

class BigInt 
{
    string value;
public:
    // Hàm khởi tạo số nguyên lớn bằng 0
    BigInt();

    // Hàm khởi tạo số nguyên lớn từ một xâu c-string
    BigInt(const char*);

    // Hàm khởi tạo số nguyên lớn từ một số nguyên lớn khác
    BigInt(const BigInt& );

    // Toán tử in ra màn hình
    friend ostream& operator<< (ostream& , const BigInt& );

    // Toán tử cộng
    friend BigInt operator+(const BigInt& , const BigInt & );
};


BigInt::BigInt(){
    value = "0";
}

BigInt::BigInt(const char* num){
    value = num;
}

BigInt::BigInt(const BigInt& num){
    for (int i = 0; i < num.value.length(); i++)
        value += num.value[i];
}

ostream& operator<<(ostream& os, const BigInt& num){
    os<<num.value<<endl;
    return os;
}

BigInt operator+(const BigInt& num, const BigInt & other){
    BigInt c("");
    string a = num.value;
    string b = other.value;
    a.insert(0, max(0, (int)(b.size()-a.size())), '0');
    b.insert(0, max(0, (int)(a.size()-b.size())), '0');

    int remain = 0;
    for(int i=a.size()-1; i>=0; i--){
        int sum = a[i]-'0' + b[i]-'0' + remain;
        remain = sum / 10;
        sum = sum%10;
        c.value = (char)(sum + '0') + c.value;
    }
    if(remain > 0)
        c.value = (char)(remain + '0') + c.value;

    return c;
}

int main(){
    BigInt num1;
    cout << num1;

    BigInt num2("4879124129988949491929991249124912312");
    cout << num2;

    BigInt tmp("23");
    BigInt num3(tmp);
    cout << num3;

    BigInt a = BigInt("7412391231723192399991239");
    BigInt b = BigInt("21348123");
    cout << a + b << endl;

    BigInt num("34123");
    cout << num + BigInt("23") + BigInt("3341");
}
