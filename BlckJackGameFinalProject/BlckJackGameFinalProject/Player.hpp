//
//  Player.hpp
//  BlckJackGameFinalProject
//
//  Created by Jeremy Vasquez on 5/2/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//


#define Player_hpp

#include <stdio.h>
#pragma once
#include <string>
#include <vector>
#include "Card.hpp"

class Player
{
public:
    Player();
    ~Player();
private:
    int intPlayerNumber;
    int intMoney;
    int intBet;
    std::string strName;
    std::vector<Card> vtrPlayerHand;
    void setPlayerNumber();
public:
    std::string inputPlayerName();
    void setPlayerName(std::string strpName);
    int getHandPointValue();
    void printHand();
    std::string toString();
    std::string getHandString();
    std::string getPlayerName();
    bool addCard(Card objpCard);
    int getNumberCards();
    void clearHand();
    
    void setMoney(int intpMoney);
    int getMoney();
    void setBet(int intpBet);
    int getBet();
    int inputPlayerBet();
    
    
    
};
