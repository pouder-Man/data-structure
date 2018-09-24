//
// Created by vkdne on 2018-02-01.
//

#ifndef DATASTRUCTURE_HEAPNODE_H
#define DATASTRUCTURE_HEAPNODE_H

#endif //DATASTRUCTURE_HEAPNODE_H

#include <iostream>
using namespace std;

class HeapNode {
    int key;
public :
    HeapNode(int i = 0) : key(i){}
    void setKey(int i){key = i;}
    int getKey(){return key;}
    void display(){cout<<key<<"   ";}
};
