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
    void addChild(Type data);
};

template<class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{//unused
}
template<class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(Type data) : Node<Type>(data)
{
    
}

template<class Type>
N_AryTreeNode<Type> :: ~N_AryTreeNode()
{
    nodes.clear();
}
template<class Type>
N_AryTreeNode<type> * N_AryTreeNode<Type> :: getRoot()
{
    return root;
}
template<class Type>
set<N_AryTreeNode<type>*> N_AryTreeNode<Type> :: getNodes()
{
    return nodes;
}
template<class Type>
int N_AryTreeNode<type> :: getChildCount()
{
    return nodes.size();
}
template<class Type>
void N_AryTreeNode<type> :: setRoot(N_AryTreeNode<Type> * root)
{
    this->root = root;
}
template<class Type>
void N_AryTreeNode<type> :: addChild(Type data)
{
    N_AryTreeNode<Type * node = new N_AryTreeNode<Type>(data);
    nodes.insert(node);
}

#endif /* N_AryTreeNode_hpp */
