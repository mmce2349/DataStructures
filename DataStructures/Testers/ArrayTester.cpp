//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    for(int index = 0; index< 10; index++)
    {
        firstArray.setAtIndex(index, index);
    }
    
    for (int index=0; index < firstArray.getSize(); index ++)
    {
        cout << firstArray[index] << endl;
    }
    
    Array<int> secondArray(400);
    
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize() << endl;
}

void ArrayTester :: testAdvancedArray()
{
    
}
