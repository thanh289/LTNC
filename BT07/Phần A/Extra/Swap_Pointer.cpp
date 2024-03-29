#include <bits/stdc++.h>
using namespace std;


void swap_pointers(char** x, char** y) // Sử dụng con trỏ của con trỏ
{
    char *tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";

    char *s1 = a;
    char *s2 = b;
    swap_pointers(&s1, &s2); // Truyền con trỏ của con trỏ
    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    return 0;
}
