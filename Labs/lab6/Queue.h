/***************************************************************************************************
 * Christian Mesina
 * Queue.h
 * May 20, 2019
 * This .h file implements the Queue functions.
***************************************************************************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include "../lab5/List.h"

using namespace std;

template <class T, template <class S> class Container = List>
class Queue
{
public:
    bool empty() const { return container.empty(); }
    unsigned int size() const { return container.size(); }
    void push(const T & x) { container.push_back(x); }
    void push(T && x) { container.push_back(move(x)); }
    void pop() { container.pop_front(); }
    T & front() { return container.front(); }
    T & back() { return container.back(); }
private:
    Container<T> container;
};

#endif
