//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include <string>
using namespace std;
class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
    string otherMystery(string word);
    
public:
    void testRecursionNumbers();
    void testRecursionString();
};
#endif /* RecursionTester_hpp */
