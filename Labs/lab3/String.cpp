/************************************************************************
Christian Mesina
April 22, 2019
String.cpp

This .cpp file is the implementation of constructors and member functions
defined in String.h.
************************************************************************/

#include <cassert>
#include "String.h"

// default constructor
String::String()
{
    size = 0;
    buffer = nullptr;
}

// copy constructor
String::String(const String & source)
{
    size = source.size;
    buffer = new char[size];
    assert(buffer != nullptr);

    for (int i = 0; i < size; i++)
        buffer[i] = source.buffer[i];
}

// move constructor
String::String(String && source): size{source.size}, buffer{source.buffer}
{
    source.size = 0;
    source.buffer = nullptr;
}

// constructor from "char string" to String
// find size of p, allocate space, assign p to buffer
String::String(const char * p)
{
    size = 0;
    for (const char *q = p; *q; q++)
        size++;
    buffer = new char[size];
    assert(buffer != nullptr);

    for (int i = 0; i < size; i++)
        buffer[i] = p[i];
}

String::~String()
{
    delete [] buffer;
}

// copy assignment
// similar to char string constructor, but here
// create a temp buffer based on source,
// delete existing buffer, then assign temp buffer to buffer
String & String::operator=(const String & source)
{
    char * temp = new char[source.size];
    assert(temp != nullptr);
    
    for (int i = 0; i < source.size; i++)
        temp[i] = source.buffer[i];

    delete [] buffer;
    buffer = temp;
    size = source.size;

    return *this;
}

// Determines the size or length of a String
int String::length()
{
    int i;
    for(i = 0; i < size; i++);
    return i;
}

// Creates a char String operator
char & String::operator[](const int x)
{
    assert(x >= 0);
    assert(x < size);
    return buffer[x];
}

// move assignment
String & String::operator=(String && source)
{
    size = source.size;
    source.size = 0;
    delete [] buffer;
    buffer = source.buffer;
    source.buffer = nullptr;
    return *this;
/* alternate implementation
    swap(size, source.size);
    swap(buffer, source.buffer);
    return *this;
*/
}

// Creates a += boolean operator function for Strings
String & String::operator+=(const String & source)
{
    int s = source.size;
    int new_size = size + s;
    char * temp = new char[new_size];
    assert(temp != nullptr);

    for(int i = 0; i < size; i++)
        temp[i] = buffer[i];
    for(int i = size, j = 0; j < s; i++, j++)
        temp[i] += source.buffer[j];

    delete [] buffer;
    buffer = temp;
    size = new_size;
    return *this;
}

bool operator==(const String & left, const String & right)
{
    if (left.size != right.size)
        return false;

    for (int i = 0; i < left.size; i++)
        if (left.buffer[i] != right.buffer[i])
            return false;
    return true;
}

// Creates a <= boolean operator function for Strings
bool operator<=(const String & left, const String & right)
{
  if(left.size <= right.size)
  {
    for (int i = 0; i < left.size; i++)
        if (left.buffer[i] != right.buffer[i])
          if(left.buffer[i] > right.buffer[i])
            return false;
  }
  else
  {
    for (int i = 0; i < right.size; i++)
        if (left.buffer[i] != right.buffer[i])
          if(left.buffer[i] > right.buffer[i])
            return false;
  }
  return true;
}

ostream & operator<<(ostream & out, const String & s)
{
    for (int i = 0; i < s.size; i++)
        out << s.buffer[i];
    return out;
}
