//
//  Controller.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "Tools/Timer.hpp"
#include <vector>
#include <iostream>
#include "FileController.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/RecursionTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/SortingTester.hpp"


using namespace std;
class Controller
{
private:
    void findMaxandMin();
public:
    void start();
};
#endif /* Controller_hpp */
