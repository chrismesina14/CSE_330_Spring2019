/*********************************************************************
 * Christian Mesina
 * insertion.cpp
 * April 15, 2019
 * This program computes the time complexity of the program
 * with a insertion sort function using vectors of different sizes.
 * Also, this program records the execution times in which the user
 * can get the Big-Oh O(n^2) of the program.
*********************************************************************/

#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

void insertion_sort(vector<int> &v, int n)   //creates a insertion sort function 
{
    int i, j, elem;
    for(i = 1; i < n; i++)
    {
        for(elem = v[i], j = i-1; j >= 0 and elem < v[j]; j--)
        {
            v[j+1] = v[j];
        }
        v[j+1] = elem;
    }
}

int main()
{
    int i, n;
    cout << "Enter n: " << endl;
    cin >> n;    //user input n
    vector<int> v(n);   //initializes vector variablei
    for(i = 0; i < n; i++)
    {
        v[i] = rand() % 1'000'000;   //generates a vector of size n of random integers in the range [0-1,000,000)
    }
    insertion_sort(v, n);

    ofstream myfile;    //creates an output file stream called myfile
    myfile.open("insertion.txt");   //opens a file named insertion.txt
    for(i = 0; i < n; i++)
    {
        myfile << v[i] << endl;    //places all outputs in the file
    }
    myfile.close();
    cout << "\nAll outputs have been placed into insertion.txt\n" << endl;
}
