/*******************************************************************************************
 * Christian Mesina
 * BST_test1.cpp
 * June 3, 2019
 * This test program utilizes the Binary Search Tree functions insert(), remove(),
 * makeEmpty(), inorder(), findMin(), findMax(), and clear().
*******************************************************************************************/

#include <iostream>

#include "BinarySearchTree.h"

using namespace std;

int main()
{
    BinarySearchTree<int> tree;

    tree.insert(6);
    tree.insert(8);
    tree.insert(2);
    tree.insert(1);
    tree.insert(5);
    tree.insert(3);
    tree.insert(4);
    tree.printTree();

    cout << "Min = " << tree.findMin() << endl;
    cout << "Max = " << tree.findMax() << endl;

    cout << "Remove 2\n";
    tree.remove(2);
    tree.printTree();

    cout << "Contains 2? " << tree.contains(2) << endl;
    cout << "Contains 4? " << tree.contains(4) << endl;

    cout << "Copy Constructor\n";
    BinarySearchTree<int> copy(tree);
    cout << "Remove 6\n";
    copy.remove(6);
    copy.printTree();

    cout << "Inorder Traversal\n";
    copy.inorder();
    cout << endl;

    cout << "Clear Tree\n";
    copy.makeEmpty();
    copy.printTree();

    return 0;
}
