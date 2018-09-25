//
// Created by vkdne on 2018-09-25.
//

#ifndef DATA_STRUCTURE_NODE_H
#define DATA_STRUCTURE_NODE_H

#endif //DATA_STRUCTURE_NODE_H

#include <iostream>
using namespace std;

class Node{
    Node* prev;
    Node* next;
    int data;
public:
    Node(int val = 0) : data(val),prev(nullptr),next(nullptr){}
    Node* getPrev(){return prev;}
    Node* getNext(){return next;}
    void setPrev(Node* p){prev = p;}
    void setNext(Node* p){next = p;}
    void display(){cout << data << endl;}
    bool hasData(int val){return data == val;}
    void insertNext(Node* n){
        if(n != nullptr){
            n->prev = this;
            n->next = next;
            if(next != nullptr) next->prev = n;
            next = n;
        }
    }
    Node* remove(){
        if(prev != nullptr) prev->next = next;
        if(next != nullptr) next->prev = prev;
        return this;
    }
};