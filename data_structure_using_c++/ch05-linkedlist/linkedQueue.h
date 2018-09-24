//
// Created by vkdne on 2018-09-24.
//

#ifndef DATA_STRUCTURE_LINKEDQUEUE_H
#define DATA_STRUCTURE_LINKEDQUEUE_H

#endif //DATA_STRUCTURE_LINKEDQUEUE_H
#include <iostream>
using namespace std;



class linkedQueue{
private:
    Node* front;
    Node* rear;
    int size;
public:
    linkedQueue(){front = nullptr; rear = nullptr; size = 0;}
    ~linkedQueue(){while(!isEmpty()) delete pop();}
    bool isEmpty(){return size == 0;}
    void push(Node* p){
        if(isEmpty()) front = rear = p;
        else{
            rear->setNext(p);
            rear = p;
        }
        this->size++;
    }
    Node* pop(){
        if(isEmpty()) return nullptr;
        Node* p = front;
        front = front->getNext();
        if(front == nullptr) rear = nullptr;
        size--;
        return p;
    }
    Node* peek(){return front;}
    void display(){
        cout <<"linkedQueue" << endl;
        cout <<"size :" << this->size<<endl;
        for(Node* p = front; p != nullptr ; p = p->getNext())
            cout << p->getData() << endl;
    }
};