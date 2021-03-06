// CountingGame.cpp : Defines the entry point for the console application.
/*Jeremy Vasquez
ITSE 1302
3/26/2019
I added a limit to number of tries





*/
#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{// crmhighlow.cpp : Defines the entry point for the console application.
// Chris MacDougald
// ITSE 1307
// Simple High Low Guessing Game

/*
Pick a random number.
Have the user guess the number.
Display output based on users guess.
Repeat asking for users guess until it is equal to random number.
Display winning if user guessed random number.
*/


      srand(time(NULL)); //Get random time

      int intLimit = 100; //Set limit for guess
      int intTries = 5; 
      int intGuess = rand() % intLimit + 1; //Give me a number between 0 and 51 then add 1.
      int intCurrentGuess = 1;



     
      do { //Not equal to guess

         do { //User Input
            cout << "Please enter a number between 1 and " << intLimit << ": ";
            cin >> intCurrentGuess;
         } while (intCurrentGuess < 1 || intCurrentGuess > intLimit);

         if (intCurrentGuess > intGuess) {
            
            cout << "You guessed to high!" << intTries << endl;
         }
         else if (intCurrentGuess < intGuess) {
            intTries--;
            cout << "You guessed to low!" << intTries << endl;
         }
         else {
            cout << "You guessed wisely! Congrats YOU WIN NOTHING!" << endl;
         }
         if (intTries < 1) {
            
            cout << "You ran out of guesses. Better luck next time!" << endl;
         }

      } while (intCurrentGuess != intGuess);

  
    return 0;
}

