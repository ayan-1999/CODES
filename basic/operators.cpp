#include <iostream>
using namespace std;
int main()
{
    unsigned int  a = 50;     // 50=0011 0010
    unsigned int b = 19;     // 19=0001 0011
    int c = 0;
    c = a & b;      // 0001 0010=18
    cout << c << endl;
    c = a | b;      // 0011 0011=51
    cout << c << endl;
    c = a ^ b;      // 0010 0001=33
    cout << c << endl;
    c = ~a;         // 00 1101=
    cout << c << endl;
    c = ~b;
    cout << c << endl;
    c = a << 2;     // 1100 1000=200
    cout << c << endl;
    c = a >> 2;     // 0000 1100=12
    cout << c << endl;
}