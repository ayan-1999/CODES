// Input 3 numbers and display their value through
//  pointer.
#include <iostream>
using namespace std;
int main()
{
    int i, j, k;       // declearing the variables
    int *pi, *pj, *pk; // declearing the pointers,while declearing *does not work as refferencing operator.
    cin >> i >> j >> k;
    pi = &i;
    pj = &j; // here the pointer variable pj stores the address of "j" variable
    pk = &k;
    cout << *pi << " " << *pj << " " << *pk; // here * works as refferencing operator
} // thats why it's printing the value at the address which is pointed by pi,pj,pk
