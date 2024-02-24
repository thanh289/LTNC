#include <bits/stdc++.h>
using namespace std;


const int MAX_BAD_GUESSES = 7;
const string WORD_LIST[] = {
        "angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
    };

const string FIGURE[] = {
         "   -------------    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

         "   -------------    \n" 
         "   |           |    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",
         
         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |           |    \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|    \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",
         
         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |          /     \n" 
         "   |     \n" 
         " -----   \n",

         "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |          / \\  \n" 
         "   |     \n" 
         " -----   \n",

};

const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);



string chooseWord();
void renderGame(string guessedWord, int badGuessCount);
bool contains(string secretWord, char guess);
string update(string guessedWord, string secretWord, char guess);



int main(){

    //freopen("Hangman.inp", "r", stdin);
    //freopen("Hangman.out", "w", stdout);

    srand(time(NULL));

    
    string secretWord = chooseWord();
    
    string guessedWord = string(secretWord.length(), '-');
    cout<<"You have to find "<<guessedWord<<endl;
    
    int badGuessCount = 0;

    do{

        renderGame(guessedWord, badGuessCount);
        
        char guessChar; cin>>guessChar;
       
        if(contains(secretWord, guessChar))
            guessedWord = update(guessedWord, secretWord, guessChar);
        else
            badGuessCount++;
        
    }while(badGuessCount < MAX_BAD_GUESSES && secretWord != guessedWord);

    
    //renderGame(guessedWord, badGuessCount);
    if(badGuessCount < MAX_BAD_GUESSES)
        cout<<"Congratulation! You win!"<<endl;
    else   
        cout<<"You dead! The correct word is "<<secretWord<<endl;
}


//Take a random word from the list
string chooseWord(){

    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}


void renderGame(string guessedWord, int badGuessCount){
    cout<<FIGURE[badGuessCount]<<endl;
    cout<<guessedWord<<endl;
}


//Check whether the char player type correct or not
bool contains(string secretWord, char guessChar){

    int N = secretWord.size();

    for(int i=0; i<N; i++)
        if(secretWord[i] == guessChar || secretWord[i] == guessChar + 32)
            return true;
    
    return false;
}

//If right, update it
string update(string guessedWord, string secretWord, char guessChar){

    int N = secretWord.size();

    for(int i=0; i<secretWord.size(); i++)
        if(secretWord[i] == guessChar || secretWord[i] == guessChar + 32)
            guessedWord[i] = secretWord[i];

    return guessedWord;
}