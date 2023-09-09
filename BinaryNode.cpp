/**
 * Implementation of Homework 5 assigned by Erin Keith for CS 302.
 * 
 * @file       BinaryNode.cpp
 * @brief      Binary Node cpp file
 * @author     Robert Bothne
 * @date       04/11/21
 */
#include "BinaryNode.h"
template<class ItemType>
BinaryNode<ItemType>::BinaryNode()
{}
template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType & input){
    item = input;
    leftCP = nullptr;
    rightCP = nullptr;
}
template<class ItemType>
ItemType BinaryNode<ItemType>::getEntry() const{
    return item;
}
template<class ItemType>
BinaryNode<ItemType> * BinaryNode<ItemType>::getLeftCP() const{
    return leftCP;
}
template<class ItemType>
BinaryNode<ItemType> * BinaryNode<ItemType>::getRightCP() const{
    return rightCP;
}
template<class ItemType>
void BinaryNode<ItemType>::setItem(const ItemType & input){
    item = input;
}
template<class ItemType>
void BinaryNode<ItemType>::setLeftCP(BinaryNode<ItemType> *leftPtr){
    leftCP = leftPtr;
}
template<class ItemType>
void BinaryNode<ItemType>::setRightCP(BinaryNode<ItemType> * rightPtr){
    rightCP = rightPtr;
}
