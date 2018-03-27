//
//  BinaryTree.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"

template <class Type>
class BinaryTree : public Node<Type>
{
private:
    root : BinaryTreeNode<Type>*;
    left : BinaryTreeNode<Type>*;
    right : BinaryTreeNode<Type>*;
public:
    BinaryTreeNode() : Constructor;
    BinaryTreeNode(Type data) : Constructor;
    
    getRoot() : Constructor;
    getLeft() : BinaryTreeNode<Type>*;
    getRight() : BinaryTreeNode<Type>*;
    
    setRoot(BinaryTreeNode<Type>*) : void;
    setLeft(BinaryTreeNode<Type>*) : void;
    setRight(BinaryTreeNode<Type>*) : void;
};

#endif /* BinaryTree_hpp */
