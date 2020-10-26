/**********************************************************************
 * Christian Mesina
 * String_test2.cpp
 * April 22, 2019
 * This is a test program for String.cpp and String.h. This program
 * compares two strings s1 and s2. It will output a greater than or
 * a less than symbol if whichever string has the greatest value.
 * This program also uses the move() function to these two strings.
*********************************************************************/

#include<iostream>
#include "String.h"

using namespace std;

int main()
{
    String s1{"abcd"}, s2{"abe"};

    if(s1 == s2)
    {
        cout << s1 << " == " << s2 << endl;
    }
    else if(s1 <= s2)
    {
        cout << s1 << " < " << s2 << endl;
    }
    else
    {
        cout << s1 << " > " << s2 << endl;
    }

    s1 = move(s2);
    cout << "s1 = " << s1 << " s2 = " << s2 << endl;

    String s3 = move(s1);
    cout << "s1 = " << s1 << " s3 = " << s3 << endl;

    return 0;
}
