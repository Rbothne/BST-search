/**
 * Implementation of Homework 5 assigned by Erin Keith for CS 302.
 * 
 * @file       Driver.cpp
 * @brief      Program driver, creates 100 random numbers ranging from 1-200 and insters them into a binary search tree.
 * @author     Robert Bothne
 * @date       04/11/21
 */
#include "BinaryNode.h"
#include "BinarySearchTree.h"
#include <cstdlib>
#include <time.h>

using namespace std;

int rnjesus();
int MAX_INTEGER = 200,maxNums =100, randomNum;

int main()
{
    BinarySearchTree<int> newTree;//newtree
    srand(time(NULL)); //"randomize random"

    //bool ball;
    int i = 0;
    while(i < maxNums)//generate 100 nums and add to tree
    {
        //ball = true;
        //cout << "trout";
        randomNum=rnjesus();
        i++;
        newTree.add(randomNum);
    }
    cout << "Height of tree: ";
    cout << newTree.getHeight() << endl << endl;
    newTree.preorder();
   // cout << endl;
    newTree.inorder();
    //cout << endl;
    newTree.postorder();
    //cout << endl;
    cout << "Completed assessment";
    return 0;
}
int rnjesus() //randomly generate nums from 0 -> set max
{
    int temp = rand() % MAX_INTEGER +1;
    return temp;
}