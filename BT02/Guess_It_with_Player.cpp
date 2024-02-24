#include <bits/stdc++.h>
using namespace std;


int getComGuess(int low, int high){
    return (low+high)/2;
}


char getComAnswer(int guess, int secretNumber){
    if(guess < secretNumber){
        cout<<"Number is smaller"<<endl;
        return '<';
    }

    else if(guess > secretNumber){
        cout<<"Number is greater"<<endl;
        return '>';
    }

    else{
        cout<<"Correct answer is "<<guess<<endl;
        return '=';
    }
          
}

int main(){

    cout<<"You are host. Type a secret number! (1...100)"<<endl;
    int secretNumber; cin>>secretNumber;

    
    int low = 1, high = 100;
    int guess;
    char answer;
    
    do{
        guess = getComGuess(low, high);
        cout<<"+)"<<guess<<endl;
        answer = getComAnswer(guess, secretNumber);

        if(answer == '>') high = guess-1;
        else if(answer == '<') low = guess+1;
    }while (answer != '=');

    return 0;
}