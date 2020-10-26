/****************************************************************************************
 * Christian Mesina
 * String_test.cpp
 * May 4, 2019
 * This test program utilizes the two substring functions defined in the .h or .cpp file
****************************************************************************************/

#include <iostream>
#include <cassert>
#include "String.h"

using namespace std;

int main()
{
    int i, j;
    String s1 = "ABCDEFG";
    cout << "\nString 1 = ABCDEFG, String 2 = Hello World!"  << endl;
    
    // This substring returns the two parameters: position and length
    cout << "\nPlease enter a position and a length for String 1: " << endl; 
    cin >> i >> j;
    cout << "Substring(" << i << ", " << j << ") of String 1 = " << s1.substr(i, j);
    cout << "\n\n-----------------------------------------------------------\n";

    // This substring returns just one parameter: position
    String s2 = "Hello World!";
    String r = s2.substr(5);
    cout << "\nSubstring(5) of String 2 = " << r << endl;
    cout << endl;

    return 0;
}
