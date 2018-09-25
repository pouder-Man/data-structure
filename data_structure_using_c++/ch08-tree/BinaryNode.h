//
// Created by vkdne on 2018-09-25.
//

#ifndef DATA_STRUCTURE_BINARYNODE_H
#define DATA_STRUCTURE_BINARYNODE_H

#endif //DATA_STRUCTURE_BINARYNODE_H

#include <iostream>
using namespace std;

class BinaryNode{
protected:
    int data;
    BinaryNode* left;
    BinaryNode* right;
public:
    BinaryNode(int val = 0, BinaryNode* l = nullptr, BinaryNode* r = nullptr) : data(val),left(l),right(r){}
    void setData(int val){data = val;}
    void setLeft(BinaryNode* l){left = l;}
    void setRight(BinaryNode* r){right = r;}
    int getData(){return data;}
    BinaryNode* getLeft(){return left;}
    BinaryNode* getRight(){return right;}
    bool isleaf(){return left == nullptr && right == nullptr;}
};