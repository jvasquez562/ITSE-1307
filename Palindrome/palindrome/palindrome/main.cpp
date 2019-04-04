//
//  main.cpp
//Jeremy Vasquez
//1307 ITSE
//4-4-2019

#include <iostream>

using namespace std;

double dblLarger(double x, double y);
double dblCompareThree(double x, double y, double z);

int main(int argc, const char * argv[]) {
    
    double one, two;
    
    cout << "Line 2: The dblLarger of 5 and 10 is" << dblLarger(5,10) << endl;
    
    cout << "line 3: Enter two numbers: ";
    cin >> one >> two;
    cout << endl;
    
    cout << "Line 6: The larger of " << one << " and " << two << " is " << dblLarger(one, two) << endl;
    
    cout << "Line 7: The largest of 43.48, 34.00, 12.65" <<" and 12.65 is " << dblCompareThree(43.48, 34.00, 12.65) << endl;

    return 0;
}

double dblLarger(double x, double y)
{
    double dblMax;
    
    if(x >= y)
        dblMax = x;
    else
        dblMax = y;
    return dblMax;
}

double dblCompareThree (double x, double y, double z)
{
    return dblLarger(x, dblLarger(y,z));
}
