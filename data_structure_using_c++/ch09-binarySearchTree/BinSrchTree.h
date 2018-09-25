//
// Created by vkdne on 2018-09-25.
//

#ifndef DATA_STRUCTURE_BINSRCHTREE_H
#define DATA_STRUCTURE_BINSRCHTREE_H

#endif //DATA_STRUCTURE_BINSRCHTREE_H

#include "../ch08-tree/BinaryTree.h"

class BinSrchTree : public BinaryTree {
public:
    BinSrchTree() {}

    ~BinSrchTree() {}

    BinaryNode *search(int key) { searchIter(getRoot(), key); }

    BinaryNode *search(BinaryNode *n, int key) {
        if (n == nullptr) return nullptr;
        if (key == n->getData()) return n;
        else if (key < n->getData()) return search(n->getLeft(), key);
        else return search(n->getRight(), key);
    }

    BinaryNode *searchIter(BinaryNode *n, int key) {
        while (n != nullptr) {
            if (key == n->getData()) return n;
            else if (key < n->getData()) n = n->getLeft();
            else n = n->getRight();
        }
        cout << "Error : key["<<key<<"] is not in tree" << endl;
        return nullptr;
    }

    void insert(BinaryNode *n) {
        if (n == nullptr) return;
        if (isEmpty()) setRoot(n);
        else insert(getRoot(), n);
    }

    void insert(BinaryNode *r, BinaryNode *n) {
        while (r != nullptr) {
            if (r->getData() == n->getData())
                return;
            else if (r->getData() > n->getData()) {
                if (r->getLeft() == nullptr)
                    r->setLeft(n);
                else
                    r = r->getLeft();
            } else {
                if (r->getRight() == nullptr)
                    r->setRight(n);
                else
                    r = r->getRight();
            }
        }
    }

    //*************중요**************
    void remove(int key) {
        if (isEmpty()) return;

        BinaryNode *parent = nullptr;
        BinaryNode *node = getRoot();
        while (node != nullptr && node->getData() != key) {
            parent = node;
            node = (node->getData() < key ? node->getRight() : node->getLeft());
        }
        if (node == nullptr) {
            cout << "Error : key["<<key<<"] is not in tree" << endl;
            return;
        } else
            remove(parent, node);
    }

    void remove(BinaryNode *parent, BinaryNode *node) {
        if (node->isleaf()) {
            if (parent == nullptr)
                setRoot(nullptr);
            else {
                if (parent->getLeft() == node)
                    parent->setLeft(nullptr);
                else
                    parent->setRight(nullptr);
            }
        } else if (node->getLeft() == nullptr || node->getRight() == nullptr) {
            BinaryNode *child = (node->getLeft() != nullptr ? node->getLeft() : node->getRight());
            if (node == getRoot()) setRoot(child);
            else {
                if (parent->getLeft() == node) {
                    parent->setLeft(child);
                } else
                    parent->setRight(child);
            }
        } else {
            BinaryNode *succp = node;
            BinaryNode *succ = node->getRight();
            while (succ->getLeft() != nullptr) {
                succp = succ;
                succ = succ->getLeft();
            }
            if (succp->getRight() == succ) {
                succp->setRight(succ->getRight());
            } else {
                succp->setLeft(succ->getRight());
            }
            node->setData(succ->getData());
            node = succ;
        }
        delete node;
    }
};