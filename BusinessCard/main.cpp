//
//  main.cpp
//  BusinessCard
// Jeremy Vasquez
//  ITSE 1307
// 4-4-2019

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
        ofstream fileVCard;
        
        fileVCard.open("name.vcf");
        fileVCard << "BEGIN:VCARD" << endl;
        fileVCard << "N:Vasquez;Jeremy;;" << endl;
        fileVCard << "FN: Jeremy Vasquez" << endl;
        fileVCard << "EMAIL: jvasquez1597@gmail.com" << endl;
        fileVCard << "TEL;CELL;VOICE:(210) 123 4567" << endl;
        fileVCard << "END:VCARD" << endl;
        
        fileVCard.close();
        return 0;
    }


