//
// Created by vkdne on 2018-09-25.
//

#include <iostream>
using namespace std;
#include "BinSrchTree.h"

int main(){
    BinSrchTree tree;
    tree.insert(new BinaryNode(35));
    tree.insert(new BinaryNode(18));
    tree.insert(new BinaryNode(7));
    tree.insert(new BinaryNode(26));
    tree.insert(new BinaryNode(12));
    tree.insert(new BinaryNode(3));
    tree.insert(new BinaryNode(68));
    tree.insert(new BinaryNode(22));
    tree.insert(new BinaryNode(30));
    tree.insert(new BinaryNode(99));

    cout << "count" << endl;
    cout << tree.getCount() << endl;
    cout << "leaf count" << endl;
    cout << tree.getLeafCount() << endl;
    cout << "height" << endl;
    cout << tree.getHeight() << endl;

    tree.inorder();
    tree.postorder();
    tree.preorder();
    tree.levelorder();

    tree.search(26);
    tree.search(25);

    tree.remove(3);
    tree.levelorder();
    tree.remove(68);
    tree.levelorder();
    tree.remove(18);
    tree.levelorder();
    tree.remove(35);
    tree.levelorder();

    cout << "count" << endl;
    cout << tree.getCount() << endl;
    cout << "leaf count" << endl;
    cout << tree.getLeafCount() << endl;
    cout << "height" << endl;
    cout << tree.getHeight() << endl;

    return 0;
}