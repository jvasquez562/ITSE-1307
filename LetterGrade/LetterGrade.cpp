/*
*Jeremy Vasquez 
*ITSE 1307
*Letter Grade
*tis program is to convert a number to a letter grade
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
   int intGrade = 90;


   if (intGrade > 89) {
      cout << "grade A" << endl;
   }
   else (intGrade > 79) {
      cout << "Grade B" << endl;
   }
   else (intGrade > 69) {
      cout << "Grade C" << endl;
   }
   else (intGrade > 59) {
      cout << "Grade D" << endl;


   }

    return 0;
}

