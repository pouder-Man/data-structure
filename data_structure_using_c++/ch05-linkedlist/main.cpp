//
// Created by vkdne on 2018-09-24.
//

#include <iostream>
using namespace std;


#include "node.h"
#include "linkedStack.h"
#include "linkedQueue.h"
#include "linkedList.h"


int main(){
    linkedList list;
    list.display();
    list.insert(0,new Node(10));
    list.insert(0,new Node(20));
    list.insert(0,new Node(30));
    list.insert(0,new Node(40));
    list.display();
    list.remove(0);
    list.remove(1);
    list.display();
    list.clear();
    list.display();
    list.insert(0,new Node(40));
    list.insert(1,new Node(30));
    list.display();
    return 0;
}