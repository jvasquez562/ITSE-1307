//
//  main.cpp
//Jeremy Vasquez
//1307 ITSE
//4-4-2019

#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>


using namespace std;


int abs(int intNumber)
{
    if (intNumber < 0)
        intNumber = -intNumber;
    
    return intNumber;
}
int main(int argc, const char * argv[]) {
    
    int num;
    double FirstNum, SecondNum;
    char ch = 'T';
    
    cout << fixed << showpoint << setprecision (2)
    << endl;
    
    cout << "Line 12: Is " << ch << "a lowercase letter? " << islower(ch) << endl;
    
    cout << "Line 13: Uppercase a is " << static_cast<char> (toupper('a')) << endl;
    
    cout << "Line 14: 4.5 to the power 6.0 = " << pow(4.5, 6.0) << endl;
    
    cout << "Line 15: Enter two decimal numbers:";
    cin >> FirstNum >> SecondNum;
    cout << endl;
    
    cout << "Line 18: " << FirstNum << "to the power of " << SecondNum
    << " = " << pow(FirstNum, SecondNum) << endl;
    
    cout << "Line 19: 5.0 to the power of 4 = " << pow(5.0,4) << endl;
    
    FirstNum = FirstNum + pow(3.5, 7.2);
    cout << "Line 21: FirstNum = " << FirstNum << endl;
    
    num = -32;
    cout << "Line 23: Absolute value of " << num
    << " = " << abs(num) << endl;
    
    cout << "Line 24: Square root of 28.00 = " << sqrt(28.00) << endl;
    
    return 0;
}
