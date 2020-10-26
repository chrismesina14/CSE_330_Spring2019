// Christian Mesina
// sum.cpp
// 4/12/2019

#include <iostream>
using namespace std;
int main()
{
    int i, n = 10, total = 0;

    for(i = 1; i <= n; i++)
        total += i;  // line 11

    cout << "1 + 2 + ... + " << n << " = " << total << endl;  // line 13
}
