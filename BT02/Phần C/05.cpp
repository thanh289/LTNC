#include <bits/stdc++.h>
using namespace std;

const string read[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine",
        "thirty", "thirty one", "thirty two", "thirty three", "thirty four", "thirty five", "thirty six", "thirty seven", "thirty eight", "thirty nine",
        "forty", "forty one", "forty two", "forty three", "forty four", "forty five", "forty six", "forty seven", "forty eight", "forty nine",
        "fifty", "fifty one", "fifty two", "fifty three", "fifty four", "fifty five", "fifty six", "fifty seven", "fifty eight", "fifty nine",
        "sixty", "sixty one", "sixty two", "sixty three", "sixty four", "sixty five", "sixty six", "sixty seven", "sixty eight", "sixty nine",
        "seventy", "seventy one", "seventy two", "seventy three", "seventy four", "seventy five", "seventy six", "seventy seven", "seventy eight", "seventy nine",
        "eighty", "eighty one", "eighty two", "eighty three", "eighty four", "eighty five", "eighty six", "eighty seven", "eighty eight", "eighty nine",
        "ninety", "ninety one", "ninety two", "ninety three", "ninety four", "ninety five", "ninety six", "ninety seven", "ninety eight", "ninety nine",};



int main(){

    int number; cin>>number;
    
    if(number<0) cout<<"negative ";
    number = abs(number);

    vector<int> digit;
    while(number>0){
        digit.push_back(number%10);
        number /= 10;
    }


    // for(int i=0; i<digit.size(); i++)
    //     cout<<digit[i]<<" ";
    
    int n = digit.size();
    
    if(n==9)
        cout<<read[digit[8]]<<" hundred and "<<read[digit[7]*10+digit[6]]<<" million, "<<read[digit[5]]<<" hundred and "<<read[digit[4]*10+digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==8)
        cout<<read[digit[7]*10+digit[6]]<<" million, "<<read[digit[5]]<<" hundred and "<<read[digit[4]*10+digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==7)
        cout<<read[digit[6]]<<" million, "<<read[digit[5]]<<" hundred and "<<read[digit[4]*10+digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==6)
        cout<<read[digit[5]]<<" hundred and "<<read[digit[4]*10+digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==5)
        cout<<read[digit[4]*10+digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==4)
        cout<<read[digit[3]]<<" thousand, "<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==3)
        cout<<read[digit[2]]<<" hundred and "<<read[digit[1]*10+digit[0]]<<endl;
    if(n==2)
        cout<<read[digit[1]*10+digit[0]]<<endl;
    if(n==1)
        cout<<read[digit[0]]<<endl;
}   