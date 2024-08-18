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
    cout << "give no of turn." << endl;
    cin >> k;
    for (int n = 1; n <= k; n++)
    {
        int m = a[row - 1][col - 1];
        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                if (i == 0 && j == 0)
                {
                    a[0][0] = m;
                }
                else if (j == 0)
                {
                    a[i][j] = a[i - 1][col - 1];
                }
                else
                    a[i][j] = a[i][j - 1];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
