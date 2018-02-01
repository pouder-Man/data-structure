//
// Created by vkdne on 2018-02-01.
//

#include "MaxHeap.h"

int main(){

    MaxHeap heap;


    heap.insert(10);
    heap.insert(17);
    heap.insert(13);
    heap.insert(4);
    heap.insert(14);
    heap.insert(9);
    heap.insert(11);
    heap.insert(1);
    heap.insert(2);
    heap.insert(3);

    heap.display();
    cout<<endl;
    heap.remove();
    heap.display();
    cout<<endl;
    heap.remove();
    heap.display();
    cout<<endl;
    return 0;
}