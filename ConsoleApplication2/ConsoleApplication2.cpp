// ConsoleApplication2.cpp : Defines the entry point for the console application.
//Name: Jeremy Vasquez
//Class: ITSE 1307
//Date: 02/28/2019

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

   double dblA = 0.0;
   double dblB = 0.0;
   double dblC = 0.0;


   cout << "this is a simple math equation that solves for c = ab/a-b" << endl;

   cout << "enter value for A" << endl;
   cin >> dblA;

   cout << "Enter value for B" << endl;
   cin >> dblB;

   dblC = dblA * dblB / (dblA - dblB);

   cout << "C =:" << dblC << endl;

    return 0;
}

