#include <bits/stdc++.h>
using namespace std;


int main(){
    //1. bool isA = (grade >= 90 && grade <=100);
    
    //2.
    double x2 = (double) (3/5);
    cout<<x2<<endl;

    //3.

    //4.
    cout<<(sqrt(2)*sqrt(2) == 2)<<endl;

    //5.
    //cout << 2/0 <<endl;

    //6.
    //khai báo ngoài hàm main thì in ra 0
    double x6; 
    cout<<x6<<endl;

    //7.
    int threeInt = 3;
	int fourInt  = 4;
	double threeDouble = 3.0;
	double fourDouble  = 4.0;
	cout << threeInt / fourInt << endl;
	cout << threeInt / fourDouble << endl;
	cout << threeDouble / fourInt << endl;
	cout << threeDouble / fourDouble << endl;

    //8.
    // int  arg1;
	// arg1 = -1;
	// char myDouble = '5';
	// char arg1 = 'A';
	// cout << arg1 << "\n";

    //9.
    int arg19;
	arg19 = -1;
	{
	  char arg19 = 'A'; 
	  cout << arg19 << "\n";
	} 

    //10.
    int arg110;
	arg110 = -1;
	{
	  char arg110 = 'A'; 
	} 
	cout << arg110 << "\n";

	return 0;

    //11.
    // double C = (F - 32) * (5 / 9); --> double C = (F - 32) * (double)(5 / 9);

    //12.
    if (10 > 5); 
	 else; {           
	    cout << "Here";
	 };

}