//
//  Runner.cpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
using namespace std;
int main()
{
    int sample = 7;
    string word = "asda";
    string word2 = "asda";
    cout << &word << endl;
    cout << &word2 << endl;
    
    unsigned long * storage;
    storage = new unsigned long [0xffffffff];
    storage [address] = 0;
    
    cout << &sample << endl;
    unsigned long address = (unsigned long) &sample;
    cout << address << endl;
    if(&sample == address)
    {
        cout << "the same" << endl;
    }
   // Controller app;
  //  app.start();
    return 0;
}
