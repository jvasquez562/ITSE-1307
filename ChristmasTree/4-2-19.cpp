// 4-2-19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printTree(int intpHeight) {
   //tree
   int intwidth = 1;
   for (int intRow = 1; intRow < intpHeight; intRow++) {
      for (int intSpaces = 1; intSpaces <= intpHeight - intRow; intSpaces++) {
         cout << " ";
      }
      for (int intColum = 1; intColum <= intwidth; intColum++) {
         cout << "*";
      }
      cout << "*";
   }
   intwidth += 2;
   cout << endl;
}
int main() 
{

int intTreeHeight = 5;

printTree(intTreeHeight);


return 0;
}