//
// Created by vkdne on 2018-02-01.
//

#ifndef DATASTRUCTURE_MAXHEAP_H
#define DATASTRUCTURE_MAXHEAP_H

#endif //DATASTRUCTURE_MAXHEAP_H

#include "heapNode.h"
#define MAX_ELEMENT 200

class MaxHeap{
    HeapNode node[MAX_ELEMENT];
    int size;
public:
    MaxHeap() : size(0){}

    bool isEmpty(){return size==0;}
    bool isFull(){return size == MAX_ELEMENT;}

    HeapNode& getParent(int i){return node[i/2];}
    HeapNode& getLeft(int i){return node[2*i];}
    HeapNode& getRight(int i){return node[2*i+1];}

    void insert(int key){
        if(isFull()) {
            cout <<"Err : heap is full"<<endl;
            return;
        }
        size++;
        int i = size;

        while(i != 1 && key > getParent(i).getKey()){
            node[i] = getParent(i);
            i /= 2;
        }
        node[i].setKey(key);
    }
    HeapNode remove(){
        HeapNode top = node[1];
        HeapNode last = node[size];
        size--;

        int parent = 1;
        int child = 2;

        while(child <= size){
            if(child < size && getLeft(parent).getKey() < getRight(parent).getKey()){
                child++;
            }

            if(last.getKey() >= node[child].getKey()){
                break;
            }

            node[parent] = node[child];
            parent = child;
            child = (parent*2);
        }
        node[parent] = last;
        return top;
    }
    HeapNode find(){return node[1];}

    void display(){
        for(int i = 1, level = 1 ; i <= size ; i++){
            if(i == level){
                cout << endl;
                level *= 2;
            }
            node[i].display();
        }
    }
};