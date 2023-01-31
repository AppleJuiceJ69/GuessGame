#include <iostream>
#include <string>

using namespace std;

//when they enter a guess, they'll get 3 tries. If guess wrong, retry. If guess right break;
//we need a loop that keeps it going.

int main(){
    string yourGuess;
    int guessCount = 3;
    string guess = "zebra";
    int maxGuess = 0;

    for(int i = 0; i < guessCount; i++){
        maxGuess++;
        cout << "enter your guess: ";
        cin >> yourGuess;
        if(yourGuess == "zebra"){
             cout << "congratulations that was the right guess!!!";
            break;
           
        }
        else if(yourGuess != "zebra" && maxGuess != 3){
                cout << "try again! " << endl;
        };
        if(maxGuess == 3){
            cout << "Game OVER";
        }
    }
   
   
    
}