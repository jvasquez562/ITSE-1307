// Practice.cpp : Defines the entry point for the console application.
//This is a program to convert miles to kilometers 
//Author Jeremy Vasquez
//Class ITSE 1307
//Date 02/12/2019

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

   double dblMile = 0.0;
   double dblKilo =0.0;
   double milesToKilo = 0.0;

  
   cout << "conversion of miles to kilometers" << endl;
   cout << "There is 1.6 miles in a kilometer" << endl;

   dblMile = 5.0;
   dblKilo = 1.6;

   cout << "Enter a value for miles" << endl;
   cin >> dblMile;

   cout << dblMile * 1.6 << endl;



    return 0;
}

