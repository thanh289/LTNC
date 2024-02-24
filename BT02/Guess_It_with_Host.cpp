#include <bits/stdc++.h>
using namespace std;

int generateRandomNumber(){
    return rand() % 100 + 1;
}

int getPlayerguess(){
    cout<<"Try a number (1...100): ";
    int x; cin>>x;
    return x;
}

void printAnswer(int guess, int secretNumber){
    if(guess < secretNumber)
        cout<<"Your number is smaller"<<endl;
    else if(guess > secretNumber)
        cout<<"Your number is higher"<<endl;
    else
        cout<<"Correct answer"<<endl;
}

void replay(){
    int score = 101;
    cout<<"You have "<<score-1<<" points"<<endl;

    srand(time(NULL));

    int secretNumber = generateRandomNumber();
    int guess;

    do{  
        score--;   

        guess = getPlayerguess();

        printAnswer(guess, secretNumber);

    }while(guess != secretNumber);

    cout<<"Your score now is "<<score<<endl;
}

int main(){
    
    while(true){
        replay();

        cout<<"Do you want to play again? (Y/N)"<<endl;
        string try_again;
        cin>>try_again;

        if(try_again == "Y")
            continue;
        else if(try_again == "N"){
            cout<<"Thank for playing game!"<<endl;
            break;
        }
            
    }
    
    
return 0;

}