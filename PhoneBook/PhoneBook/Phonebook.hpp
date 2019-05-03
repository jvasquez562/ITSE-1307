//
//  Phonebook.hpp
//  PhoneBook
//
//  Created by Jeremy Vasquez on 5/2/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//


#define Phonebook_hpp

#include <stdio.h>
#pragma once
#include "Contact.hpp"
#include <string>
#include <vector>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    int addContact(Contact objContact);
    bool editContact(int intIndex);
    bool deleteContact(int intIndex);
    void printContacts();
    bool clearContacts();
private:
    std::vector<Contact> vtrPhoneBook;
};


