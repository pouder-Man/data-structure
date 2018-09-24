//
// Created by vkdne on 2018-09-24.
//

#ifndef DATA_STRUCTURE_LINKEDLIST_H
#define DATA_STRUCTURE_LINKEDLIST_H

#endif //DATA_STRUCTURE_LINKEDLIST_H


class linkedList {
    Node org;
public:
    linkedList() { org.setData(0); }

    ~linkedList() { clear(); }

    void clear() { while (!isEmpty()) delete remove(0); }

    Node *getHead() { return org.getNext(); }

    bool isEmpty() { return getHead() == nullptr; }

    Node *getEntry(int pos) {
        Node *n = &org;
        for (int i = -1; i < pos; i++, n = n->getNext()) {
            if (n == nullptr)
                break;
        }
        return n;
    }

    void insert(int pos, Node *n) {
        Node *prev = getEntry(pos - 1);
        if (prev != nullptr)
            prev->insertNext(n);
    }

    Node *remove(int pos) {
        Node *prev = getEntry(pos - 1);
        return prev->removeNext();
    }

    Node *find(int val) {
        for (Node *p = getHead(); p != nullptr; p = p->getNext()) {
            if (p->hasData(val))
                return p;
        }
        return nullptr;
    }

    void replace(int pos, Node *n) {
        Node *prev = getEntry(pos - 1);
        if (prev != nullptr) {
            delete prev->removeNext();
            prev->insertNext(n);
        }
    }

    int size() {
        int count = 0;
        for (Node *p = getHead(); p != nullptr; p = p->getNext())
            count++;
        return count;
    }
    void display(){
        cout <<"linkedList"<<endl;
        cout << "size : "<< this->size()<<endl;
        for(Node* p = getHead() ; p != nullptr ; p = p->getNext())
            cout << p->getData() << endl;
    }
};