/*****************************************************************************
 * Christian Mesina
 * homework1.cpp
 * April 22, 2019
 * This program finds the kth largest number among N numbers assuming
 * 0 < k <= N. The numbers are then placed in an input file and the user
 * will input a value k. When ll numbers are read, the number in position
 * k-1 is the answer. These numbers are sorted in non-increasing order.
*****************************************************************************/

#include<iostream>
#include<fstream>

using namespace std;

void sort(int num[], int n)     // creates a sort function for array of numbers
{
    int i, j;
    for(i = 0; i < n; i++)      // a selection sort that sorts an array of numbers
    {                           // in non-increasing order
        for(j = i+1; j < n; j++)
        {
            if(num[j] > num[i])
            {
                swap(num[i], num[j]);
            }
        }
    }
}

int main()
{
    int i, n, k;
    int num[n];     // initializes array of N numbers

    cout << "Enter k: " << endl;;
    cin >> k;
    cout << "Enter n: " << endl;;
    cin >> n;

    ifstream inFile;        // creates an input file stream
    inFile.open("input.txt", ios::in);      // opens a file called input.txt
    for(i = 0; i < n; i++)                  // ios::in opens input operations
    {
        inFile >> num[i];       // accesses the array of numbers in the file
    }

    sort(num, n);       // calls the sort function
    
    cout << "\nThere are " << n << " numbers in the array: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << num[i] << endl;     // prints out the array of numbers that the user inputs
    }
   
    if(k == 1)      // print conditions
    {
        cout << "\nThe " << k << "st largest number is " << num[k-1] << endl;
    }
    else if(k == 2)
    {
        cout << "\nThe " << k << "nd largest number is " << num[k-1] << endl;
    }
    else if(k == 3)
    {
        cout << "\nThe " << k << "rd largest number is " << num[k-1] << endl;
    }
    else if(k >= 4 && k <= 20)
    {
        cout << "\nThe " << k << "th largest number is " << num[k-1] << endl;
    }
    cout << endl;

    inFile.close();     // closes the file stream
}
