//
//  main.cpp
//  PrintTree
//  Jeremy Vasquez
//  ITSE 1307
//  4-09-19

#include <iostream>

using namespace std;

void PrintTree (int intpHeight) {
    //Tree
    int intWidth = 1;
    for (int intRow = 1; intRow < intpHeight; intRow++){
        for (int intSpaces = 1; intSpaces <= intpHeight - intRow; intSpaces++)
        {
        cout << " ";
        }
for (int intColumn = 1; intColumn <= intWidth; intColumn++)
{
        cout << "*";
}
        intWidth += 2;
        cout <<endl;
    }
    
    //Trunk
    for (int intSpaces = 1; intSpaces < intpHeight; intSpaces++){
        cout << " ";
    }
    cout << "*" << endl;
    
}

int main()
{
    int intTreeHeight = 5;
    
    do {
        cout << "Enter the height of the tree you wish to print as an integer value: ";
        cin >> intTreeHeight;
        
        PrintTree(intTreeHeight);
        
    } while (intTreeHeight != 0);
    
}

