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
    BinaryTreeNode<Type>* root;
     BinaryTreeNode<Type>* left;
    BinaryTreeNode<Type>* right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
       BinaryTreeNode<Type>*getRootNode();
      BinaryTreeNode<Type>*getLeftNode();
     BinaryTreeNode<Type>*getRightNode();
    
    void setRootNode(BinaryTreeNode<Type>* root);
    void setLeftNode(BinaryTreeNode<Type>* right);
    void setRightNode(BinaryTreeNode<Type>* left);
};

#endif /* BinaryTree_hpp */
