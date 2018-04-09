//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type>* startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class type>
void BinarySearchTree <Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current== nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current -> getData())
            {
                current = current -> getLeftNode();
            }
            else if(itemToInsert > current->getData())
            {
                current = current ->getRightNode();
            }
            else
            {
                cerr << "Item exists already - exiting insert" << endl;
                delete insertMe;
                return;
            }
            
        }
    
        if (previous->getData() > itemToInsert)
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(previous);
        }
        insertMe->setRootNode(previous);

    }
    
}

template <class type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template<class type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        cout << "going left" << endl;
        inOrderTraversal(inStart->getLeftNode());
        cout << "Node contents: " << inStart->getData() << endl;
        cout << "going right" << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}
template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}
template<class type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinaryTreeNode<Type> * current = this-> root;
    if(current == nullptr)
    {
        reutrn false;
    }
    else
    {
     while(current != nullptr)
     {
      if(itemToFind == current -> nullptr)
      {
          return true;
      }
      else if(itemToFind < current -> getData())
         {
             current = current->getLeftNode();
         }
         else
         {
             current= current -> getRightNode();
         }
     }
        return false;
    }
}
template<class type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
  if(this->root == nullptr)
  {
      cout << "empty tree so removal is not possible" << endl;
      
  }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
         if(current->getData() == getRidOfMe)
         {
             hasBeenFound = true;
         }
            else
            {
                previous = current;
                if(getRidOfMe < current->getData())
                {
                    current = current->getLeftNode();
                }
                else
                {
                    current = current->getRightNode();
                }
            }
        }
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if (hasBeenFound)
        {
            if(current == this-> root)
            {
             removeNode(this->node);
            }
             else if(getRidOfMe < previous -> getData())
             {
            removeNode(previous->getLeftNode());
            
             }
            else
            {
                removeNode(previous->getRightNode());
       
            }
        }
    }
}
template <class type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type* removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    if(removeMe->getRightNode()== nullptr && removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getData() < previous-> getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous ->getData())
        {
            previous->setRightNode(removeMe);
        }
        else if(removeMe->getRightNode() == nullptr)
        {
            temp = removeMe;
            removeMe = removeMe->getLeftNode();
            
            if(previous != nullptr && temp-> getData() < previous->getData())
            {
                previous->setLeftNode(removeMe);
            }
            else if(previous != nullptr && temp->getData() >  previous->getData())
            {
                previous ->setRightNode(removeMe);
            }
            removeMe->setRootNode(previous);
            delete temp;
        }
        else if (removeMe->getLeftNode() == nullptr)
        {
            temp = removeMe;
            removeMe= removeMe->getRightNode();
            if(previous != nullptr && removeMe->getData() < previous-> getData())
            {
                previous->setLeftNode(removeMe);
            }
            else if(previous != nullptr && removeMe-> getData() > previous-> getData())
            {
                previous -> setRightNode(removeMe);
            }
            removeMe->setRightNode(removeMe);
            delete temp;
        }
        //do both children method
        
        delete temp;
    }
}
template <class type>
int BinarySearchTree<Type> :: getHeight()
{
    reutrn calculateHeight(this->root);
    
}
template <class type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * current)
{
    if(current != nullptr)
    {
        return max(calculateHeight(current->getLeftNode()), calculateHeight(current->getRightNode())) + 1;
    }
    return 0;
}
template <class type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    size+= calculateSize(this->root);
    return size;
}
template <class type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * current)
{
    if(current != nullptr)
    {
        return calculateSize(current->getLeftNode())+ calculateSize(current->getRightNode()) + 1;
        
    }
    return 0;
}
template <class type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size= getSize();
    
    return iscomplete(this->root, index, size);
}
template <class type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    if(index>=size)
    {
        return false;
    }
    return (isComplete(startNode-> getLeftNode(), 2 * index + 1, size) && isComplete(startNOde->getRightNode(), 2 * index + 2, size));
}
template <class type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
    
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    return false;
}


#endif /* BinarySearchTree_hpp */
