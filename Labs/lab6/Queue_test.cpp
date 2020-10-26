/***************************************************************************************************
 * Christian Mesina
 * Queue_test.cpp
 * May 20, 2019
 * This test program implements the Queue functions.
***************************************************************************************************/

#include <iostream>
#include "Queue.h"
#include "../lab3/String.h"
#include "../lab5/List.h"
#include <cassert>

using namespace std;

int main()
{
    Queue <int> q;
    q.push(2);
    q.push(4);
    q.push(6);

    cout << "Front = " << q.front() << endl;
    q.pop();
    cout << "Front after Pop = " << q.front() << endl;
    cout << "Back = " << q.back() << endl;

    Queue<String, List> s;
    s.push("Data");
    s.push("Structures");
    assert(s.front() == "Data");

    cout << "\nString Test = SUCCESS\n";

    return 0;
}
