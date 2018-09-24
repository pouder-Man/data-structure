//
// Created by vkdne on 2018-09-24.
//

#ifndef DATA_STRUCTURE_LINKEDLIST_H
#define DATA_STRUCTURE_LINKEDLIST_H

#endif //DATA_STRUCTURE_LINKEDLIST_H

#include <iostream>
using namespace std;

class linkedStack{
private:
    Node* top;
public:
    linkedStack(){top = nullptr; }
    ~linkedStack(){
        while(!isEmpty()){
            delete pop();
        }
    }
    bool isEmpty(){
        return top == nullptr;
    }

    void push(Node* p){
        if(isEmpty()) top = p;
        else{
            p->setNext(top);
            top = p;
        }
    }

    Node* pop(){
        if(isEmpty()) return nullptr;
        Node* p = top;
        top = top->getNext();
        return p;
    }

    Node* peek(){return top;}
    void display(){
        cout << "linkedStack!!!!"<<endl;
        if(isEmpty()){
            cout << "EMPTY!!!"<<endl;
            return;
        }
        for(Node* p = top ; p != nullptr ; p = p->getNext())
            cout << p->getData() << endl;
        cout << endl;
    }
};