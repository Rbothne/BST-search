/**
 * Implementation of Homework 5 assigned by Erin Keith for CS 302.
 * 
 * @file       BinaryNode.h
 * @brief      Binary Node header file
 * @author     Robert Bothne
 * @date       04/11/21
 */
#ifndef BINARY_NODE_
#define BINARY_NODE_
#include <memory>
template<class ItemType>
class BinaryNode{
        ItemType item;
        BinaryNode<ItemType> *leftCP;
        BinaryNode<ItemType> *rightCP;
    public:
        BinaryNode();
        BinaryNode(const ItemType & input);

        ItemType getEntry() const;
        BinaryNode<ItemType> * getLeftCP() const;
        BinaryNode<ItemType> * getRightCP() const;
        void setItem(const ItemType & input);
        void setLeftCP(BinaryNode<ItemType> * leftPtr);
        void setRightCP(BinaryNode<ItemType> * rightPtr);
};
#include "BinaryNode.cpp"
#endif