#include <bits/stdc++.h>
using namespace std;

int min1(int a, int b, int c, int d) {
   if (a <= b && a <= c && a <= d) return a;

   if (b <= c && b <= d) return b;

   if (c <= d) return c;
   return d;
}

int min2(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
}

//nearly the same min1
int min3(int a, int b, int c, int d) {
   if (a < b && a < c && a < d) return a;
   if (b < c && b < d)          return b;
   if (c < d)                   return c;
   return d;
}

int min4(int a, int b, int c, int d) {
   if (a <= b) {
      if (a <= c) {
         if (a <= d)  return a;
         else return d;
      }
      if (c <= d) return c;
      else return d;
   }
   if (b <= c) {
      if (b <= d) return b;
      else return d;
   }
   else if (c <= d) return c;
   return d;
}

int min5(int a, int b) {
   if (a <= b) return a;
   else        return b;
}

int min6(int a, int b, int c, int d) {
   return min(min(a, b), min(c, d));
}


int main()
{
    int a = 0, b = 1, c = 2, d = -1;
    cout<<min1(a, b, c, d)<<endl;
    cout<<min2(a, b, c, d)<<endl;
    cout<<min3(a, b, c, d)<<endl;
    cout<<min4(a, b, c, d)<<endl;
    cout<<min5(a, b)<<endl;
    cout<<min6(a, b, c, d)<<endl;
}

//tất cả đều cho ra đúng kết quả