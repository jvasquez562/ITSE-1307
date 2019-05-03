//
//  Contact.hpp
//  PhoneBook
//
//  Created by Jeremy Vasquez on 5/2/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//


#define Contact_hpp

#include <stdio.h>
#pragma once
#include <string>
#include <iostream>

class Contact
{
public:
    Contact();
    ~Contact();
private:
    std::string strFirstName;
    std::string strLastName;
    std::string strPhoneNumber;
public:
    void setFirstName(std::string strpFirstName);
    std::string getFirstName();
    void inputFirstName();
    void setLastName(std::string strpLastName);
    std::string getLastName();
    void inputLastName();
    void input();
    std::string toString();
};

