//
//  Deck.hpp
//  BlckJackGameFinalProject
//
//  Created by Jeremy Vasquez on 5/2/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//


#define Deck_hpp

#include <stdio.h>

#pragma once
#include <vector>
#include <algorithm>
#include "Card.hpp"

class Deck
{
public:
    Deck();
    Deck(int intpNumberOfDecks);
    Deck(int intpNumberOfDecks, int intpShufflePoint);
    ~Deck();
private:
    std::vector<Card> vtrDeck;
    int intShufflePoint = 0;
    int intCurrentCardIndex = 0;
    void init(int intpNumberOfDecks);
public:
    Card getCard();
    void shuffle();
    int size();
    int getShufflePercent();
    int getPercentOfDeckDealt();
    bool shouldShuffle();
    void setShufflePercent(int intpShufflePercent);
};

