#include <iostream>
using namespace std;

void reverse(char a[]) {
    char *start = a;
    char *end = a;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


void delete_char(char a[], char c) {
    char *p = a;
    while (*a != '\0') {
        if (*a != c) {
            *p++ = *a;
        }
        a++;
    }
    *p = '\0';
}


void pad_right(char a[], int n) {
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }

    while (len < n) {
        a[len] = '_';
        len++;
    }
    a[len] = '\0';
}


void pad_left(char a[], int n) {
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }
    if (len < n) {
        int spaces = n - len;
        for (int i = len - 1; i >= 0; i--) {
            a[i + spaces] = a[i];
        }

        for (int i = 0; i < spaces; i++) {
            a[i] = '_';
        }
        a[n] = '\0';
    }
    
}


void truncate(char a[], int n) {
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }
    if (len > n) {
        a[n] = '\0';
    }
}


bool is_palindrome(char a[]) {
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }
    char *start = a;
    char *end = a + len - 1;
    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

\
void trim_left(char a[]) {
    int spaces = 0;
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }
    for (char *q = a; *q != '\0'; q++) {
        if(*q == '_') spaces++;
        else break;
    }

    int s = len-spaces;
    for(int i=0; i<s; i++){
        a[i] = a[i+spaces];
    }
    a[s] = '\0';
}


void trim_right(char a[]) {
    int len = 0;
    for (char *q = a; *q != '\0'; q++) {
        len++;
    }
    char *end = a + len - 1;
    while (end >= a && *end == '_') {
        end--;
    }
    *(end + 1) = '\0';
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "racecar";
    char str3[] = "Lollollol";
    char str4[] = "This is bad";
    char str5[] = "Nah i'd win and die";
    char str6[] = ":PPPPPP:";
    char str7[] = "_____>:D";
    char str8[] = "Let's check all____";

    //a
    cout << "Before reverse: " << str1 << endl;
    reverse(str1);
    cout << "After reverse: " << str1 << endl;

    //b
    cout << "Before delete_char: " << str2 << endl;
    delete_char(str2, 'a');
    cout << "After delete_char 'a': " << str2 << endl;

    //c
    cout << "Before pad_right: " << str3 << endl;
    pad_right(str3, 15);
    cout << "After pad_right: " << str3 << endl;

    //d
    cout << "Before pad_left: " << str4 << endl;
    pad_left(str4, 15);
    cout << "After pad_left: " << str4 << endl;

    //e
    cout << "Before truncate: " << str5 << endl;
    truncate(str5, 11);
    cout << "After truncate: " << str5 << endl;

    //f
    cout << "Is str2 a palindrome? " << (is_palindrome(str2) ? "Yes" : "No") << endl;
    cout << "Is str4 a palindrome? " << (is_palindrome(str4) ? "Yes" : "No") << endl;
    cout << "Is str6 a palindrome? " << (is_palindrome(str6) ? "Yes" : "No") << endl;

    //g
    cout << "Before trim_left: " << str7 << endl;
    trim_left(str7);
    cout << "After trim_left: " << str7 << endl;

    //h
    cout << "Before trim_right: " << str8 << endl;
    trim_right(str8);
    cout << "After trim_right: " << str8 << endl;

    return 0;
}
