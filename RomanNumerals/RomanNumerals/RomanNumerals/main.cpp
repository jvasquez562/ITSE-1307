//
//  main.cpp
//  RomanNumerals
//
//  Created by Jeremy Vasquez on 4/19/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "RomanNumerals1.hpp"

int main()
{
    RomanNumeral objNumeral;
    RomanNumeral objNumeralTwo;
    objNumeral.set("MMIII");
    objNumeralTwo.set("MMIII");
    
    std::cout << objNumeral.getValue() << std::endl;
    std::cout << objNumeral.isEqual(&objNumeralTwo);
}
