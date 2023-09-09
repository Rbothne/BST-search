
/**
 * Implementation of Homework 5 assigned by Erin Keith for CS 302.
 * 
 * @file       BinarySearchTree.h
 * @brief      Binary search tree header file
 * @author     Robert Bothne
 * @date       04/11/21
 */
#ifndef BINARY_SEARCH_TREE_
#define BINARY_SEARCH_TREE_
#include "BinaryNode.h"
#include <iostream>

template<class ItemType>
class BinarySearchTree{
        BinaryNode<ItemType>* rootPtr;
    protected:
        BinaryNode<ItemType> * placeNode(BinaryNode<ItemType> *subTreePtr, BinaryNode<ItemType> * newNode);
        BinaryNode<ItemType> * removeNode(BinaryNode<ItemType> * subTreePtr, const ItemType & data, bool & isSuccessful);
    public:
        BinarySearchTree();
        BinarySearchTree(const ItemType & rootItem);
        BinarySearchTree(const BinarySearchTree<ItemType> & tree);

        bool isEmpty() const;
        int getHeight() const;
        int getHeightHelper(BinaryNode<ItemType> * subTreePtr) const;
        int getNumberOfNodes() const;

        bool add(const ItemType & newData);
        bool remove(const ItemType & data);
        void clear();
        bool contains(const ItemType & data) const;

        void preorder();
        void inorder();
        void postorder();
        void preorderHelper(BinaryNode<ItemType> *treePtr) const;
        void inorderHelper(BinaryNode<ItemType> *treePtr) const;
        void postorderHelper(BinaryNode<ItemType> *treePtr) const;
        //void destructorHelper(BinaryNode<ItemType> * node);

        BinarySearchTree<ItemType> & operator=(const BinarySearchTree<ItemType> &rightHandSide);
        ~BinarySearchTree();
};
#include "BinarySearchTree.cpp"
#endif