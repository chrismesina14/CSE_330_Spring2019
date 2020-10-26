/*****************************************************************************
 * Christian Mesina
 * Set_test3.cpp
 * June 4, 2019
 * This test program utilizes the Set functions insert(), print(), erase(), empty(), count(), size()
 * clear() and copy constructor.
*****************************************************************************/

#include <iostream>

#include "Set.h"

using namespace std;

int main()
{
    Set<int> tree;

    cout << "Size = " << tree.size() << endl;
    cout << "Empty? " << tree.empty() << endl;

    tree.insert(6);
    tree.insert(8);
    tree.insert(2);
    tree.insert(1);
    tree.insert(5);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5); // duplicate, will be ignored
    tree.printTree();

    cout << "Count 5 = " << tree.count(5) << endl;
    cout << "Size = " << tree.size() << endl;
    cout << "Empty? " << tree.empty() << endl;
    cout << "Erase 2\n";
    tree.erase(2);
    tree.printTree();

    cout << "Size = " << tree.size() << endl;
    cout << "Empty? " << tree.empty() << endl;
    cout << "Count 2 = " << tree.count(2) << endl;
    cout << "Erase 6\n";
    tree.erase(6);
    tree.printTree();

    cout << "Copy Constructor\n";
    Set<int> copy(tree);
    copy.printTree();

    cout << "Copy Size = " << copy.size() << endl;
    cout << "Clear Copy\n";
    copy.clear();
    cout << "Size = " << copy.size() << endl;
    cout << "Empty? " << copy.empty() << endl;
}
