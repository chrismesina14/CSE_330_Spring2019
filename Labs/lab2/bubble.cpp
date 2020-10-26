/*********************************************************************
 * Christian Mesina
 * bubble.cpp
 * April 15, 2019
 * This program computes the time complexity of the program
 * with a bubble sort function using vectors of different sizes.
 * Also, this program records the execution times in which the user
 * can get the Big-Oh O(n^2) of the program.
*********************************************************************/

#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

void bubble_sort(vector<int> & v, int n)   //creates a bubble sort function
{
    int j, i;
    for(i = n-1; i > 0; i--)
    {
        for(j = 0; j < i;  j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);   //swap vectors if conditions are met
            }
        }
    }
}

int main()
{
    int i, n;
    cout << "Enter n: " << endl;
    cin >> n;    //user input n
    vector<int> v(n);   //initializes vector variable
    for(i = 0; i < n; i++)
    {
        v[i] = rand() % 1'000'000;   //generates a vector of size n of random integers in the range [0-1,000,000)
    }
    bubble_sort(v, n);

    ofstream myfile;    //creates an output file stream called myfile
    myfile.open("bubble.txt");   //opens a file named bubble.txt
    for(i = 0; i < n; i++)
    {
        myfile << v[i] << endl;    //places all outputs in the file
    }
    myfile.close();
    cout << "\nAll outputs have been placed into bubble.txt\n" << endl;
}
