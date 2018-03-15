//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/ListAbstractBase.hpp"
#include <iostream>
using namespace std;

class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};


#endif /* TestingStacksAndQueues_hpp */
