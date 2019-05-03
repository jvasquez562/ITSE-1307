//
//  Phonebook.cpp
//  PhoneBook
//
//  Created by Jeremy Vasquez on 5/2/19.
//  Copyright © 2019 Jeremy Vasquez. All rights reserved.
//

#include "Phonebook.hpp"


PhoneBook::PhoneBook()
{
    vtrPhoneBook.clear();
}


PhoneBook::~PhoneBook()
{
    vtrPhoneBook.clear();
}


int PhoneBook::addContact(Contact objContact)
{
    vtrPhoneBook.push_back(objContact);
    return vtrPhoneBook.size();
}


bool PhoneBook::editContact(int intIndex)
{
    vtrPhoneBook.at(intIndex).input();
    return true;
}


bool PhoneBook::deleteContact(int intIndex)
{
    int intBeforeSize = vtrPhoneBook.size();
    vtrPhoneBook.erase(vtrPhoneBook.begin() + intIndex);
    int intAfterSize = vtrPhoneBook.size();
    return (intBeforeSize > intAfterSize);
}


void PhoneBook::printContacts()
{
    for (int intIndex = 0; intIndex < vtrPhoneBook.size(); intIndex++) {
        std::cout << (intIndex + 1) << ") " << vtrPhoneBook.at(intIndex).toString() << std::endl;
    }
}


bool PhoneBook::clearContacts()
{
    vtrPhoneBook.clear();
    return (vtrPhoneBook.size() == 0);
}
