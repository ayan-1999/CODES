#include <iostream>
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
    int k;
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            k = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = k;
        }
    } // write code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
