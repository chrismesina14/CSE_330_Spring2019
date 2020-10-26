/**************************************************************************************************
 * Christian Mesina
 * hw3.h
 * May 22, 2019
 * This .h file contains the union and intersection list functions.
**************************************************************************************************/

#ifndef HW3_H
#define HW3_H

#include <iostream>

using namespace std;

template <class T>
list<T> my_intersect(const list<T> & a, const list<T> & b)      // intersection function for lists
{
    list<T> temp;
    list<T> temp_a = a;
    list<T> temp_b = b;
    
    typename list<T>::iterator itr1 = temp_a.begin(); 
    typename list<T>::iterator itr2 = temp_b.begin();
    
    while(itr1 != temp_a.end() and itr2 != temp_b.end())
    {
        if(*itr1 < *itr2)
        {
            itr1++;
        }
        else if(*itr2 < *itr1)
        {
            itr2++;
        }
        else                // if *itr1 == *itr2 
        {
            temp.push_back(*itr1);
            itr1++;
            itr2++;
        }
    }
    return temp;
}

template <class T>
list<T> my_union(const list<T> & a, const list<T> & b)      // union function for lists
{
    list<T> unionList;
    list<T> temp_a = a;
    list<T> temp_b = b;
     
    typename list<T>::iterator itr1 = temp_a.begin(); 
    typename list<T>::iterator itr2 = temp_b.begin();
    
    while(itr1 != temp_a.end() and itr2 != temp_b.end())
    {
        if(*itr1 < *itr2)
        {
            unionList.push_back(*itr1);
            itr1++;
        }
        else if(*itr2 < *itr1)
        {
            unionList.push_back(*itr2);
            itr2++;
        }
        else                // if *itr1 == *itr2
        {
            unionList.push_back(*itr1);
            itr1++;
            itr2++;
        }
    }
    return unionList;
}

#endif
