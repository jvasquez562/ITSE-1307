﻿// ConsoleApplication2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int intSideA = 4;
   int intSideB = 5;
   double dblSideC = 0;
   cout << "pythagream thorem Solver" << endl;
   cout << "Please enter sideA of the triangle";
      cin >> intSideA;
   cout << "Please enter sideB of the triangle";
      cin >> intSideB;
   dblSideC = sqrt((intSideA * intSideA) + (intSideB * intSideB));
   cout << "sideC has a length of: "<<dblSideC << endl;
 return 0;
}
