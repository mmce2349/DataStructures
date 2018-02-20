//
//  ListAbstractBase.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef ListAbstractBase_hpp
#define ListAbstractBase_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

class ListAbstractBase
{
protected:
    int size;
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) =0;
    virtual Type remove(int index) =0;
    virtual Type getFromIndex(int index) =0;
    
    virtual int getSize() const =0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() =0;
    
};

#endif /* ListAbstractBase_hpp */
