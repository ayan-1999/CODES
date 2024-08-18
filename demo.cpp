#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int col;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    // write code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
