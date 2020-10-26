/*****************************************************************************
 * Christian Mesina
 * Set_test1.cpp
 * June 8, 2019
 * This test program utilizes the Set functions insert(), erase(),
 * clear(), inorder(), findMin(), findMax(), and clear().
*****************************************************************************/

#include <iostream>

#include "Set.h"

using namespace std;

int main()
{
    Set<int> tree;

    tree.insert(6);
    tree.insert(8);
    tree.insert(2);
    tree.insert(1);
    tree.insert(5);
    tree.insert(3);
    tree.insert(4);
    tree.printTree();

    cout << "Min = " << tree.findMin() << endl;
    //cout << "Max = " << tree.findMax() << endl;

    cout << "Remove 2\n";
    tree.erase(2);
    tree.printTree();

    cout << "Contains 2? " << tree.count(2) << endl;
    cout << "Contains 4? " << tree.count(4) << endl;

    cout << "Copy Constructor\n";
    Set<int> copy(tree);
    cout << "Remove 6\n";
    copy.erase(6);
    copy.printTree();

/*    cout << "Inorder Traversal\n";
    copy.inorder();
    cout << endl;*/

    cout << "Clear Tree\n";
    copy.clear();
    copy.printTree();

    return 0;
}
