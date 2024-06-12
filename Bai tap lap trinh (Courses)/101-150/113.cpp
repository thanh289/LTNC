#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int height;
    int length;


    Rectangle(){
        height = 0;
        length = 0;
    }

    Rectangle(int a, int b){
        height = a;
        length = b;
    }

    int getPerimeter(){
        return (height + length) * 2;
    }

    void print(){
        
        for(int i=1; i<=length; i++)
            cout<<"*";
        cout<<endl;

        for(int i=1; i<=height-2; i++){
            cout<<"*";
            for(int j=1; j<=length-2; j++)
                cout<<" ";
            cout<<"*"<<endl;
        }

        if(height>=2){
            for(int i=1; i<=length; i++)
                cout<<"*";
            cout<<endl;
        }
        
    }
};

int compare(Rectangle a, Rectangle b){
    if(a.getPerimeter() < b.getPerimeter())
        return -1;
    if(a.getPerimeter() > b.getPerimeter())
        return 1;
    return 0;
}

int main(){
    Rectangle a;
    int inputHeight, inputLength;
    cin>>inputHeight>>inputLength;
    a.height = inputHeight;
    a.length = inputLength;
    cout << a.getPerimeter() << endl;
    a.print();
}