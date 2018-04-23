//
//  N_AryTreeNode.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 4/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef N_AryTreeNode_hpp
#define N_AryTreeNode_hpp

#include <set>
#include "Node.hpp"
using namespace std;

template<class Type>
class N_AryTreeNode : public Node<type>
{
private:
    set<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNode<Type> * root;
public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNode<Type>();
    N_AryTreeNode<Type>(Type data);
    
    set<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type>* getRoot();
    int getChildCount();
    
    void setRoot(N_AryTreeNode<Type>* root);
    void addChild(N_AryTreeNode<Type> * node);
};

template<class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{//unused
}


#endif /* N_AryTreeNode_hpp */
