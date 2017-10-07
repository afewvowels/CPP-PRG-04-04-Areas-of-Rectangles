//
//  main.cpp
//  PRG-4-4-Areas-of-Rectangles
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The area of a rectangle is the rectangle's length times its width. Write a program that
//  asks for the length and width of two rectangles. The program should tell the user which
//  rectangle has the greater area, or if the areas are the same.


#include <iostream>

using namespace std;

int main()
{
    int intRect1Height,
        intRect1Width,
        intRect1Area,
    
        intRect2Height,
        intRect2Width,
        intRect2Area;
    
    cout << "Please enter the height of the first rectangle: \n";
    cin >> intRect1Height;
    while(!cin || intRect1Height < 0)
    {
        cout << "Please enter a positive integer value:\n";
        cin.clear();
        cin.ignore();
        cin >> intRect1Height;
    }
    
    cout << "Please enter the width of the first rectangle: \n";
    cin >> intRect1Width;
    while(!cin || intRect1Width < 0)
    {
        cout << "Please enter a positive integer value:\n";
        cin.clear();
        cin.ignore();
        cin >> intRect1Width;
    }
    
    intRect1Area = intRect1Height * intRect1Width;
    
    cout << "Please enter the height of the second rectangle: \n";
    cin >> intRect2Height;
    while(!cin || intRect2Height < 0)
    {
        cout << "Please enter a positive integer value:\n";
        cin.clear();
        cin.ignore();
        cin >> intRect2Height;
    }
    
    cout << "Please enter the width of the second rectangle: \n";
    cin >> intRect2Width;
    while(!cin || intRect2Width < 0)
    {
        cout << "Please enter a positive integer value:\n";
        cin.clear();
        cin.ignore();
        cin >> intRect2Width;
    }
    
    intRect2Area = intRect2Height * intRect2Width;
    
    if(intRect1Area > intRect2Area)
    {
        cout << "The first rectange is larger than the second rectangle.\n";
    }
    else if(intRect1Area == intRect2Area)
    {
        cout << "The two rectangles have the same area.\n";
    }
    else
    {
        cout << "The second rectangle is larger than the first rectangle.\n";
    }
    
    return 0;
}


