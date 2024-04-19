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


// Toán tử in ra màn hình
ostream& operator<<(ostream& os, const BigInt& num)
{
    os << num.value;
    return os;
}

// Hàm khởi tạo
BigInt::BigInt() 
{
    value = "0";
}

BigInt::BigInt(const char *num)
{
    for (int i = 0; i < strlen(num); i++)
        value += num[i];
}

BigInt::BigInt(const BigInt& num)
{
    for (int i = 0; i < num.value.length(); i++)
        value += num.value[i];
}

// Toán tử cộng
BigInt operator+(const BigInt& num, const BigInt& other)
{
    int du = 0, mid = 0;
    BigInt r("");
    string a = num.value;
    string b = other.value;
    a.insert(0, max(0, (int)(b.length() - a.length())), '0');
    b.insert(0, max(0, (int)(a.length() - b.length())), '0');
    for (int i = a.length() - 1; i >= 0; --i)
    {
        mid = ((int)a[i] - 48) + ((int)b[i] - 48) + du;
        du = mid / 10;
        r.value = (char)(mid % 10 + 48) + r.value;
    }
    if (du > 0) r.value = "1" + r.value;
    return r;
}


int main()
{
    BigInt num1;
    cout << num1 <<endl;

    BigInt num2("4879124129988949491929991249124912312");
    cout << num2 <<endl;

    BigInt tmp("23");
    BigInt num3(tmp);
    cout << num3 <<endl;

    BigInt a = BigInt("7412391231723192399991239");
    BigInt b = BigInt("21348123");
    cout << a + b << endl;

    BigInt num4("34123");
    cout << num4 + BigInt("23") + BigInt("3341");
}