// ConsoleApplication2.cpp : Defines the entry point for the console application.
//Converting miles to kilometers 
//author Jeremy Vasquez
//Class ITSE 1307
//Date 02/12/2019

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	double intMiles = 0.0;
	double intKilo = 0.0;
	double mileToKilo = 0.0;

	cout << "A program to convert miles to kilometers" << endl;
	cout << "There is 1.6 miles in a kilometer" << endl;
	
	intMiles = 2.0;
	intKilo = 1.6;
	
	
	mileToKilo = intMiles * intKilo;
	cout << "output: " << mileToKilo << endl;
	
	
	
	
	return 0;
}

