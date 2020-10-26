/*******************************************************************************************
 * Christian Mesina
 * BST_test2.cpp
 * June 3, 2019
 * This test program utilizes the Binary Search Tree functions insert(), inorder, postorder,
 * and preorder traversal.
*******************************************************************************************/

#include <iostream>

#include "BinarySearchTree.h"

using namespace std;

int main()
{
    BinarySearchTree<int> complete_tree;

    complete_tree.insert(20);
    complete_tree.insert(10);
    complete_tree.insert(30);
    complete_tree.insert(35);
    complete_tree.insert(25);
    complete_tree.insert(5);
    complete_tree.insert(15);
    complete_tree.printTree();

    cout << "Inorder Traversal\n";
    complete_tree.inorder();
    cout << endl;

    cout << "Postorder Traversal\n";
    complete_tree.postorder();
    cout << endl;

    cout << "Preorder Traversal\n";
    complete_tree.preorder();
    cout << endl;

    return 0;
}
