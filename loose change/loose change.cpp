// loose change.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
   double dblHd = .50;
   double dblQ = .25;
   double dblD = .10;
   double dblN = .05;
   double dblP = .01;
   double dblTotal = 0.0;
   cout << "How much change is in your pocket?" << endl;
   cout << "You have 2 quarters, 1 dime, and 1 nickle" << endl;
   cout << "please enter quarters";
      cin >> dblQ;
   cout << "please enter dimes";
      cin >> dblD;
   cout << "please entere nickles";
      cin >> dblN; 
   dblTotal = (dblQ * 2) + dblD + dblN;
   cout << "you have a total of: " << dblTotal << endl;
    return 0;
}

