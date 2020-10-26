/****************************************************************************
 * Christian Mesina
 * String.h
 * April 22, 2018
 * This .h file is the String class definition
*****************************************************************************/

#ifndef STRING_H
#define STRING_H

#include<iostream>

using namespace std;

class String
{
    int size;
    char * buffer;
public:
    String();               // default constructor
    String(const String &); // copy constructor
    String(String &&);      // move constructor
    String(const char *);
    String(char);
    ~String();              // destructor

    int length();
    char & operator[](const int);
    String & operator=(const String &);     // copy assignment
    String & operator=(String &&);          // move assignment
    String & operator+=(const String &);

    friend bool operator==(const String &, const String &);
    friend bool operator<=(const String &, const String &);
    friend bool operator<(const String &, const String &);

    friend ostream & operator<<(ostream &, const String &);
};

#endif
