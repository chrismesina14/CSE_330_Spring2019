/************************************************************************
 * Christian Mesina
 * String.h
 * May 4, 2019
 * This .h file includes two new string functions: substr(int pos) and
 * substr(int pos, int len).
************************************************************************/

#ifndef STRING_H
#define STRING_H
#include <iostream>

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
    String substr(int pos); // Substring function with one parameter
    String substr(int pos, int len); // Substring function with two parameters

    int length();
    char & operator[](const int);
    String & operator=(const String &); // copy assignment
    String & operator=(String &&);      // move assignment
    String & operator+=(const String &);

    friend bool operator==(const String &, const String &);
    friend bool operator<=(const String &, const String &);
    friend bool operator<(const String &, const String &);

    friend ostream & operator<<(ostream &, const String &);
};

#endif
