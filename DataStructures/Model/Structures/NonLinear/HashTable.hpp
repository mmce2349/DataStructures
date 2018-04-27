//
//  HashTable.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include "../Nodes/HashNode.hpp"
template <class type>
class Hashtable
{
private:
    HashNode<Type> * internalStorage;
    long size;
    double loadFactor;
    
    long getNextPrime(long current);
public:
    Hashtable();
    ~Hashtable();

};

template<class Type>
Hashtable<Type> :: Hashtable()
{
    internalStorage = new HashNode<Type>[101];
    size = 0;
    loadFactor= .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
long Hashtable<Type> :: getNextPrime(long currentNumber)
{
    return -1;
}
#endif /* HashTable_hpp */
