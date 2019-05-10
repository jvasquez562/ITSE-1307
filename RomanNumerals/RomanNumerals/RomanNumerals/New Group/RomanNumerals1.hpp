//
//  RomanNumerals1.hpp
//  RomanNumerals
//
//  Created by Jeremy Vasquez on 5/9/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//


#define RomanNumerals1_hpp
#include <string>
#include <iostream>

class RomanNumeral
{
public:
    RomanNumeral();
    ~RomanNumeral();
private:
    float dblNumeral;
public:
    std::string toString();
    float getValue();
    std::string getString();
    void set(float dblNumber);
    void set(std::string strNumber);
    bool isEqual(RomanNumeral *objpOther);
};

