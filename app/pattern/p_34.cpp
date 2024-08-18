#include <iostream>
using namespace std;
int main()
{
    int row = 0;
    cin >> row;

    for (int i = 1; i <= row; i++)//i is resposible for row number//
    {
        for (int j = 1; j <= i; j++) // j is printing *//
        {
            cout << "*";
        }
        cout << endl;
    }
}