/**
 * Implementation of Homework 5 assigned by Erin Keith for CS 302.
 * 
 * @file       BinarySearchTree.cpp
 * @brief      Binary search tree cpp file
 * @author     Robert Bothne
 * @date       04/11/21
 */
#include "BinarySearchTree.h"
#include <algorithm>

using namespace std;

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(){
    rootPtr=nullptr;
}
template<class ItemType>
bool BinarySearchTree<ItemType>::add(const ItemType & newData){
    BinaryNode<ItemType> * newNodePtr = new BinaryNode<ItemType>(newData);
    rootPtr = placeNode(rootPtr, newNodePtr);
    return true;
}
template<class ItemType>
BinaryNode<ItemType> * BinarySearchTree<ItemType>::placeNode(BinaryNode<ItemType>*subPtr, BinaryNode<ItemType> * newNodePtr){
BinaryNode<ItemType> * tempPtr;
if (subPtr == nullptr){
    return newNodePtr;
}
else if (subPtr->getEntry() > newNodePtr->getEntry()){
    tempPtr = placeNode(subPtr->getLeftCP(), newNodePtr);
    subPtr->setLeftCP(tempPtr);
}else{
    tempPtr = placeNode(subPtr->getRightCP(), newNodePtr);
    subPtr->setRightCP(tempPtr);
    }
    return subPtr;
}
template<class ItemType>
BinaryNode<ItemType> * BinarySearchTree<ItemType>::removeNode(BinaryNode<ItemType> * subPtr, const ItemType & data, bool & success){
    BinaryNode<ItemType> * tempPtr;
    if(subPtr == nullptr){
        success = false;
    }
    else if (subPtr->getEntry() == data){
        subPtr = removeNode(subPtr);
        success = true;
    }
    else if (subPtr->getEntry() > data) {
        tempPtr = removeNode(subPtr->getLeftCP(), data, success);
        subPtr->setLeftCP(tempPtr);
    }
    else{
        tempPtr = removeNode(subPtr->getRightCP(), data, success);
        subPtr->setRightCP(tempPtr);
    }
    return subPtr;
}
template<class ItemType>
void BinarySearchTree<ItemType>::preorder(){
    cout << "PRE ORDER" << endl;
    preorderHelper(rootPtr);
    cout << endl << endl;
}
template<class ItemType>
void BinarySearchTree<ItemType>::inorder(){
    cout << "IN ORDER" << endl;
    inorderHelper(rootPtr);
    cout << endl << endl;
}
template<class ItemType>
void BinarySearchTree<ItemType>::postorder(){
    cout << "POST ORDER" << endl;
    postorderHelper(rootPtr);
    cout << endl << endl;
}
template<class ItemType>
void BinarySearchTree<ItemType>::preorderHelper(BinaryNode<ItemType> *treePtr)const{
    if (treePtr == nullptr){
    return;
    }else{
        cout << treePtr->getEntry() << " ";
        preorderHelper(treePtr->getLeftCP());
        preorderHelper(treePtr->getRightCP());
    } 
}
template<class ItemType>
void BinarySearchTree<ItemType>::inorderHelper(BinaryNode<ItemType> *treePtr) const{
    if(treePtr == nullptr){
    return;
    }else{
        inorderHelper(treePtr->getLeftCP());
        cout << treePtr->getEntry() << " ";
        inorderHelper(treePtr->getRightCP());
    }
}
template<class ItemType>
void BinarySearchTree<ItemType>::postorderHelper(BinaryNode<ItemType> *treePtr)const{
    if(treePtr == nullptr){
    return;
    }else{
        postorderHelper(treePtr->getLeftCP());
        postorderHelper(treePtr->getRightCP());
        cout << treePtr->getEntry() << " ";
    }
}
template<class ItemType>
int BinarySearchTree<ItemType>::getHeight() const{
    return getHeightHelper(rootPtr);
}
template<class ItemType>
int BinarySearchTree<ItemType>::getHeightHelper(BinaryNode<ItemType> * subPtr) const{
    if(subPtr == nullptr){
    return 0;
    }else{
        int lheight = getHeightHelper(subPtr->getLeftCP());
        int rheight = getHeightHelper(subPtr->getRightCP());
        if (lheight> rheight){
            return (lheight+1);
        }else{
            return (rheight+1);
        }
    }
}
/*template<class ItemType>
void BinarySearchTree<ItemType>::destructorHelper(BinaryNode<ItemType> * node){
    if (node)
    {
        destructorHelper(node->getLeftCP);
        destructorHelper(node->getRightCP);
        delete node;
    }
}*/
template<class ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree(){}