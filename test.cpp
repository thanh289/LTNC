// Dựng lớp Vector thể hiện vector 2 chiều với các hàm tính toán trên vector như sau

// class Vector {
//     double x_, y_;
// public:
//     Vector(double x = 0, double y = 0);  // đã làm ở bài trước
//     void print(int precision = 2, bool newLine = true); // đã làm ở bài trước
//     void truncate(double length);
//     bool isOrtho(const Vector& v) const;
//     static float dot(const Vector& v1, const Vector& v2);
//     static float cross(const Vector& v1, const Vector& v2);
//     friend ostream& operator<<(ostream& os, const Vector& v); 
// };
// Trong đó: 

// Hàm void truncate(double length) giảm độ dài các tọa độ của vecto v  đi một khoảng length. Hàm này làm thay đổi tọa độ của vecto hiện tại.
// Hàm bool isOrtho(const Vector& v) const kiểm tra xem vecto hiện tại và vecto v có trực giao hay không. Nếu có, hàm trả về giá trị true
// , ngược lại, trả về giá trị false
// . Hàm không làm thay đổi giá trị của vector hiện tại.
// Hàm static float dot(const Vector& v1, const Vector& v2) thực hiện phép nhân vô hướng hai vector, hàm trả về giá trị là một số thực. Hàm không làm thay đổi giá trị của hai vector đầu vào.
// Hàm static Vector cross(const Vector& v1, const Vector& v2) tính tích chéo của hai vector v1 và v2. Hàm trả về kết quả tích chéo là một số thực. Hàm không làm thay đổi giá trị của hai vector đầu vào.
// Hàm friend ostream& operator<<(ostream& os, const Vector& v) thực hiện việc định nghĩa lại toán tử <<
//  thực hiện việc in kết quả của một vector ra màn hình, kết quả tương tự như khi thực hiện hàm Vector::print(). Hàm trả về luồng đầu ra được định nghĩa tương ứng và không làm thay đổi giá trị của vector truyền vào.
// Lưu ý: Bạn chỉ cần viết nội dung của lớp Vector là đủ, các phần đã làm ở bài trước có thể sao chép sang bài này.



// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;
// class Vector {
// 	double x_, y_;
// public: 
// 	Vector(double x = 0, double y = 0) {
// 		x_ = x;
// 		y_ = y;
// 	}
// 	void print(int precision = 2, bool newLine = true) {
// 		cout << fixed << setprecision(precision) << "(" << x_ << ", " << y_ << ")"; }
// 	void truncate(double length) {
//         x_ /= length;
//         y_ /=length;
//     }
// 	bool isOrtho(const Vector& v) const {
// 		return v.x_ * this->x_ + v.y_ * this->y_ == 0;
// 	}
// 	static float dot(const Vector& v1, const Vector& v2) {
// 		return v1.x_ * v2.x_ + v1.y_ * v2.y_;
// 	}
// 	static float cross(const Vector& v1, const Vector& v2) {
// 		return v1.x_ * v2.y_ - v1.y_ * v2.x_;
// 	}
// 	friend ostream& operator<<(ostream& os, const Vector& v) {
// 		os << fixed << setprecision(2) << "(" << v.x_ << ", " << v.y_ << ")";
// 		return os;
// 	}
// };
//-------------------------------------------------------------------------------------------------------------------------------------------


// Cài đặt các hàm thành viên cho lớp BigInt biểu diễn một số nguyên lớn không âm như sau:

// class BigInt 
// {
//     string value;
// public:
//     // Hàm khởi tạo số nguyên lớn bằng 0
//     BigInt();

//     // Hàm khởi tạo số nguyên lớn từ một xâu c-string
//     BigInt(const char*);

//     // Hàm khởi tạo số nguyên lớn từ một số nguyên lớn khác
//     BigInt(const BigInt& );

//     // Toán tử in ra màn hình
//     friend ostream& operator<< (ostream& , const BigInt& );

//     // Toán tử cộng
//     friend BigInt operator+(const BigInt& , const BigInt & );
// };


//  int du = 0, mid = 0;
// BigInt r("");
// string a = a_.value;
// string b = b_.value;
// a.insert(0, max(0, (int)(b.length() - a.length())), '0');
// b.insert(0, max(0, (int)(a.length() - b.length())), '0');
// for (int i = a.length() - 1; i >= 0; --i)
// {
//     mid = ((int)a[i] - 48) + ((int)b[i] - 48) + du;
//     du = mid / 10;
//     r.value = (char)(mid % 10 + 48) + r.value;
// }
// if (du > 0) r.value = "1" + r.value;
// return r;


// ostream& operator<<(ostream& os, const BigInt& num)
// {
//      os << num.value << endl;
//      return os;
// }

// Hàm khởi tạo
// BigInt::BigInt() 
// {
//      value = "0";
// }

// BigInt::BigInt(const char *num)
// {
//     for (int i = 0; i < strlen(num); i++) {
//     value += num[i];
//  } 
// }

// BigInt::BigInt(const BigInt& num)
// { 
//      for (int i = 0; i < num.value.length(); i++) {
//      value += num.value[i];
//  }
    
// }

// Toán tử cộng
// BigInt operator+(const BigInt& a_, const BigInt& b_)
// {
//     int du = 0, mid = 0;
// BigInt r("");
// string a = a_.value;
// string b = b_.value;
// a.insert(0, max(0, (int)(b.length() - a.length())), '0');
// b.insert(0, max(0, (int)(a.length() - b.length())), '0');
// for (int i = a.length() - 1; i >= 0; --i)
// {
//     mid = ((int)a[i] - 48) + ((int)b[i] - 48) + du;
//     du = mid / 10;
//     r.value = (char)(mid % 10 + 48) + r.value;
// }
// if (du > 0) r.value = "1" + r.value;
// return r;
// }




#include <bits/stdc++.h>
using namespace std;



string multiply(string num1, string num2)
{

    int len1 = num1.size();
    int len2 = num2.size();
    if(len1==0 || len2==0) return "-1";
    

    vector<int> result(len1+len2, 0);

    int index1 = 0;

    for(int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        int index2 = 0;
        for(int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[index1+index2] + carry;
            
            carry = sum/10;

            result[index1+index2] = sum%10;

            index2++;
        }

        index1++;
    }

    int n = result.size() - 1;
    while(n>=0 && result[n]==0) n--;

    if(n==-1) return 0;

    string ans = "";
    for(int i=n; i>=0; i--)
        ans += to_string(result[i]);


    return ans;
}

int main()
{
    string a; cin>>a;
    string b; cin>>b;
    
    cout<<multiply(a, b)<<endl;
}