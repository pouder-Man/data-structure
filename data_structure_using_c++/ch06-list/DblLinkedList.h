//
// Created by vkdne on 2018-09-25.
//

#ifndef DATA_STRUCTURE_DBLLINKEDLIST_H
#define DATA_STRUCTURE_DBLLINKEDLIST_H

#endif //DATA_STRUCTURE_DBLLINKEDLIST_H
class DblLinkedList{
    Node org;
public:
    DblLinkedList() : org(0){}
    ~DblLinkedList(){while(!isEmpty()) delete remove(0);}
    Node* getHead(){return org.getNext();}
    bool isEmpty(){return getHead() == nullptr;}
    Node* getEntry(int pos){
        Node* n = &org;
        for(int i = -1; i < pos ; i++,n = n->getNext()){
            if(n == nullptr) break;
        }
        return n;
    }
    void insert(int pos, Node* n){
        Node* prev = getEntry(pos-1);
        if(prev != nullptr) prev->insertNext(n);
    }
    Node* remove(int pos){
        Node* n = getEntry(pos);
        return n->remove();
    }
    Node* find(int val){
        for(Node* p = getHead() ; p != nullptr ; p=p->getNext()){
            if(p->hasData(val)) return p;
        }
        return nullptr;
    }
    void replace(int pos, Node* n){
        Node* prev = getEntry(pos-1);
        if(prev != nullptr){
            delete prev->getNext()->remove();
            prev->insertNext(n);
        }
    }
    int size(){
        int count = 0 ;
        for(Node* p = getHead() ; p != nullptr ; p=p->getNext()){
            count++;
        }
        return count;
    }
    void display(){
        cout <<"DblinkedList"<<endl;
        cout <<"size : "<<size()<<endl;
        for(Node* p = getHead() ; p != nullptr ; p=p->getNext()){
            p->display();
        }
    }
    void clear(){while(!isEmpty()) delete remove(0);}
};