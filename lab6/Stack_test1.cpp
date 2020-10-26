/***************************************************************************************************
 * Christian Mesina
 * Stack_test1.cpp
 * May 20, 2019
 * This test program implements the Stack functions push(), pop(), and top().
***************************************************************************************************/

#include <iostream>

#include "../lab4/Vector.h"
#include "Stack.h"

using namespace std;

int main()
{
	Stack<int> s; // uses List as the default container
	s.push(5);
	s.push(6);
	cout << s.top() << endl;

	Stack<double, Vector> v; // uses Vector as the container
	v.push(1.5);
	v.push(2.3);
	v.pop();
	cout << v.top() << endl;

    return 0;
}
