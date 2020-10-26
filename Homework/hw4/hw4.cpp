/***********************************************************************************************
 * Christian Mesina
 * hw4.cpp
 * 06/04/2019
 * This program decides whether a file contains balanced curly braces, parentheses, square brackets, and/or angled brackets. It opens the file, and reads one character at a time until end-of-file. If the file is balanced, the program outputs "Balanced". If the file is not balanced, the program outputs "Not Balanced".
 **********************************************************************************************/

#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

bool match(char b1, char b2)
{
    if(b1 == '(' || b2 == ')')
        return true;
    else if(b1 == '{' || b2 == '}')
        return true;
    else if(b1 == '<' || b2 == '>')
        return true;
    else if(b1 == '[' || b2 == ']')
        return true;
    else
    return false;
}

int main()
{
    string file;
    ifstream in;
    stack <char> brackets;
    char next_brace;
    bool balance = true;

    cout << "Enter the filename: " << endl;
    cin >> file;

    in.open(file.c_str());
    if(!in.is_open())
    {
        cout << "Couldn't open " << file << endl;
        exit(1);
    }

    in >> next_brace;
    while(!in.eof())
    {
        if(next_brace == '(' or next_brace == '{' or next_brace == '<' or next_brace == '[')
        {
            brackets.push(next_brace);
        }
        else if(next_brace == ')' or next_brace == '}' or next_brace == '>' or next_brace == ']')
        {
            if(brackets.empty() or !match(brackets.top(), next_brace))
            {
                balance = false;
            }
            else
            {
                brackets.pop();
            }
        }
        in >> next_brace;
    }

    if(!brackets.empty() or balance == false)
    {
        cout << file << " is Not Balanced" << endl;
    }
    else
    {
        cout << file << " is Balanced" << endl;
    }
} 
