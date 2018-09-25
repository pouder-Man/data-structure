//
// Created by vkdne on 2018-09-25.
//

#ifndef DATA_STRUCTURE_BINARYTREE_H
#define DATA_STRUCTURE_BINARYTREE_H

#endif //DATA_STRUCTURE_BINARYTREE_H

#include <iostream>
#include <queue>
#include "BinaryNode.h"

using namespace std;

class BinaryTree {
    BinaryNode *root;
public:
    BinaryTree() : root(nullptr) {}

    void setRoot(BinaryNode *n) { root = n; }

    BinaryNode *getRoot() { return root; }

    bool isEmpty() { return root == nullptr; }

    void inorder() {
        cout << "[INORDER]" << endl;
        inorder(root);
    }

    void inorder(BinaryNode *n) {
        if (n != nullptr) {
            if (n->getLeft() != nullptr) inorder(n->getLeft());
            cout << n->getData() << endl;
            if (n->getRight() != nullptr) inorder(n->getRight());
        }
    }

    void preorder() {
        cout << "[PREORDER]" << endl;
        preorder(root);
    }

    void preorder(BinaryNode *n) {
        if (n != nullptr) {
            cout << n->getData() << endl;
            if (n->getLeft() != nullptr) preorder(n->getLeft());
            if (n->getRight() != nullptr) preorder(n->getRight());
        }
    }

    void postorder() {
        cout << "[POSTORDER]" << endl;
        postorder(root);
    }

    void postorder(BinaryNode *n) {
        if (n->getLeft() != nullptr) postorder(n->getLeft());
        if (n->getRight() != nullptr) postorder(n->getRight());
        cout << n->getData() << endl;
    }

    void levelorder() {
        cout << "[LEVELORDER]" << endl;
        if (!isEmpty()) {
            queue<BinaryNode *> q;
            q.push(root);
            while (!q.empty()) {
                BinaryNode *n = q.front();
                q.pop();
                if (n != nullptr) {
                    cout << n->getData() << endl;
                    q.push(n->getLeft());
                    q.push(n->getRight());
                }
            }
        }
    }

    int getCount() { return isEmpty() ? 0 : getCount(root); }

    int getCount(BinaryNode *n) {
        if (n == nullptr) return 0;
        return 1 + getCount(n->getLeft()) + getCount(n->getRight());
    }

    int getHeight() { return isEmpty() ? 0 : getHeight(root); }

    int getHeight(BinaryNode *n) {
        if (n == nullptr) return 0;
        int hLeft = getHeight(n->getLeft());
        int hRight = getHeight(n->getRight());
        return hLeft > hRight ? hLeft + 1 : hLeft + 1;
    }

    int getLeafCount() { return isEmpty() ? 0 : getLeafCount(root); }

    int getLeafCount(BinaryNode *n) {
        if (n == nullptr) return 0;
        if (n->isleaf()) return 1;
        return getLeafCount(n->getRight()) + getLeafCount(n->getLeft());
    }
};