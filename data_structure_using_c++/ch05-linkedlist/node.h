//
// Created by vkdne on 2018-09-24.
//

#ifndef DATA_STRUCTURE_NODE_H
#define DATA_STRUCTURE_NODE_H

#endif //DATA_STRUCTURE_NODE_H

class Node{
private:
    Node* next;
    int data;
public:
    Node(){data = 0; next = nullptr;}
    Node(int n){data = n; next = nullptr;}
    Node* getNext(){return next;}
    void setNext(Node* n){next = n;}
    int getData(){return data;}
    void setData(int n){data = n;}
    bool hasData(int val){return val == data;}
    void insertNext(Node* n){
        if(n != nullptr){
            n->next = next;
            setNext(n);
        }
    }
    Node* removeNext(){
        Node* removed = next;
        if(removed != nullptr)
            next = removed->getNext();
        return removed;
    }
};