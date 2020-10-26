/**************************************************************************************************
 * Christian Mesina
 * hw3.cpp
 * May 22, 2019
 * This .cpp program implements the union and intersection list functions and reading the strings
 * or integers from two input files: lista.txt and listb.txt. Then, it outputs the union and 
 * intersection of the contents of that file.
**************************************************************************************************/ 

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "hw3.h"

using namespace std;

int main()
{
    ifstream in1;
    ifstream in2;
    
    string file1;
    string file2;
    
    int next1;       // string next1; (for strings)
    int next2;       // string next2; (for strings)
    
    cout << "Enter the file name of list a and list b: \n";
    cin >> file1 >> file2;
    cout << endl;
    
    in1.open(file1.c_str());
    if(!in1.is_open())
    {
        cout << "Couldn't open " << file1 << endl;
        exit(1);
    }
    
    in2.open(file2.c_str());
    if(!in2.is_open())
    {
        cout << "Couldn't open " << file2 << endl;
        exit(2);
    }
    
    list<int> lista;     // list<string> lista; (for strings)
    list<int> listb;     // list<string> listb; (for strings)
    
    in1 >> next1;
    while(!in1.eof())
    {
        lista.push_front(next1);
        in1 >> next1;
    }
    
    in2 >> next2;
    while(!in2.eof())
    {
        listb.push_front(next2);
        in2 >> next2;
    }
    
    lista.sort();
    listb.sort();

    list<int> temp = my_intersect(lista, listb);     // list<string> if testing for strings
    
    for(list<int>::iterator i = temp.begin(); i != temp.end(); i++)
        cout << *i << " ";
        cout << endl;

    list<int> unionList = my_union(lista, listb);    // list<string> if testing for integers
    
    for(list<int>::iterator i = unionList.begin(); i != unionList.end(); i++)
        cout << *i << " ";
        cout << endl;
        cout << endl;
    
    return 0;
}
