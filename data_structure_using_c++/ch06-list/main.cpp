//
// Created by vkdne on 2018-09-25.
//
#include <iostream>

using namespace std;

#include "node.h"
#include "DblLinkedList.h"

int main(){
    DblLinkedList dl;
    dl.display();
    dl.insert(0,new Node(1));
    dl.insert(0,new Node(2));
    dl.insert(0,new Node(3));
    dl.display();
    dl.remove(1);
    dl.display();
    dl.replace(1,new Node(10));
    dl.display();
    dl.clear();
    dl.display();

    return 0;
}
