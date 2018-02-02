//
//  Array.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp
#include <assert.h>
#include <iostream>
#include <stdio.h>
using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    Array<Type> (int size);
    
    Array<Type> (const Array<Type> & toCopy);
    
    ~Array<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type data);
    
template <class Type>
    Array<Type> :: Array(int size)
    {
        assert(size> 0);
        this->size = size;
        internalArray = new Type[size];
        
    }
    
    template <class Type>
    Array<Type> :: Array(const Array <Type> & toCopy)
    {
        this -> size = toCopy.getSize();
        
        internalArray = new Type[size];
        for(int index =0; index < size; index++)
        {
            
            internalArray[index] = toCopy[index];
        }
    }
}
#endif /* Array_hpp */
