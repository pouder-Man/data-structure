//
// Created by vkdne on 2018-09-25.
//

#include <iostream>

using namespace std;

#include "BinaryNode.h"
#include "BinaryTree.h"

int main() {
    BinaryTree tree;
    BinaryNode *d = new BinaryNode('D', nullptr, nullptr);
    BinaryNode *e = new BinaryNode('E', nullptr, nullptr);
    BinaryNode *b = new BinaryNode('B', d, e);
    BinaryNode *f = new BinaryNode('F', nullptr, nullptr);
    BinaryNode *c = new BinaryNode('C', f, nullptr);
    BinaryNode *a = new BinaryNode('A', b, c);
    tree.setRoot(a);
    tree.inorder();
    tree.postorder();
    tree.preorder();
    tree.levelorder();

    cout << "count" << endl;
    cout << tree.getCount() << endl;
    cout << "leaf count" << endl;
    cout << tree.getLeafCount() << endl;
    cout << "height" << endl;
    cout << tree.getHeight() << endl;


    return 0;
}