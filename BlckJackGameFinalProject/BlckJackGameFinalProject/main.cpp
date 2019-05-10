/*
main.cpp
BlckJackGameFinalProject
This code is for the pleasure of playing a simple blackjack game
Date : 5/09/2019
Name : Jeremy Vasquez
Class : ITSE 1307
*/

#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.hpp"
#include "Deck.hpp"
#include "Player.hpp"
using namespace std;


    
int main()
{
    srand((int)time(NULL));
    
    Player objDealer;
    Player objPlayer;
    Deck objDeck = Deck(4);
    objDeck.shuffle();
    
    //cout << objCard.toString() << endl;
    objDealer.setPlayerName("Dealer");
    cout << objDealer.toString() << endl;
    cout << objPlayer.toString() << endl;
    
    //objPlayer.inputPlayerBet();
    
    if (objDeck.shouldShuffle()) {
        objDeck.shuffle();
    }
    
    for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
        objDealer.addCard(objDeck.getCard());
        objPlayer.addCard(objDeck.getCard());
    }
    
    //Should add some logic to prevent adding more cards that needed
    while (objDealer.getHandPointValue() <= 15) {
        objDealer.addCard(objDeck.getCard());
    }
    
    cout << objDealer.toString() << endl;
    cout << objPlayer.toString() << endl;
    
    if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {
        
        cout << "The dealer wins" << endl;
        
    }
    
    else if (objPlayer.getHandPointValue() > objDealer.getHandPointValue()) {
    
        cout << "Player wins" << endl;
        
    }
    
    else if (objPlayer.getHandPointValue() == objDealer.getHandPointValue()) {
    
        cout << "the dealer wins" << endl;
    
    }
    return 0;
}
