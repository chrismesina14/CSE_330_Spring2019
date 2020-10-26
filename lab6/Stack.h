/***************************************************************************************************
 * Christian Mesina
 * Stack.h
 * May 20, 2019
 * This .h file implements the Stack functions.
***************************************************************************************************/

#ifndef STACH_H
#define STACK_H

#include "../lab5/List.h"

using namespace std;

template <class T, template <class S> class Container = List>
class Stack
{
public:
    bool empty() const { return container.empty(); }
    unsigned int size() const { return container.size(); }
    void push(const T & x) { container.push_back(x); }
    void push(T && x) { container.push_back(move(x)); }
    void pop() { container.pop_back(); }
    T & top() { return container.back(); }

private:
    Container<T> container;
};

#endif
