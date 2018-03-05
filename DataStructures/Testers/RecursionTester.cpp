//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if ( number == 0 || number == 1 )
    {
        cout<< "reached a base case" << endl;
        return 1;
    }
    else
    {
        cout<< "calling fib with: " << number - 1 << "and" << number - 2 << endl;
        return fib (number - 1) + fib (number - 2);
        
    }
}

string RecursionTester :: mystery(string word)
{
    if (word.length() == 1)
    {
        return word;
    }
    return "";
}
string RecursionTester :: otherMystery(string word)
{
    if (word.length() == 3)
    {
        return word;
    }
    else
    {
        return word + otherMystery(word.substr(1, word.length()-2));
    }
}
void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout<< "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
    
}
void RecursionTester :: testRecursionString()
{
    cout << otherMystery("x") << endl;
    cout << otherMystery("bob")<<endl;
    cout<< otherMystery("Why")<<endl;
    cout<<otherMystery("Coolio")<<endl;
}
