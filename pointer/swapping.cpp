// Write a program in C to Swap Two numbers
// using pointer.
#include <iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int *pi, *pj;
    cin >> i >> j;
    pi = &i;
    pj = &j;
    // swapping
    temp = *pi;
    *pi = *pj;
    *pj = temp;
    cout << *pi << " " << *pj;
}
