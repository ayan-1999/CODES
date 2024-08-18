// to devide the given amount in variuos types of notes
#include <iostream>
using namespace std;
int main()
{
    int amnt;
    cout << "Give the amount." << endl;
    cin >> amnt;
    if (amnt > 100)
    {
        int h = amnt / 100;
        cout << "There are " << h << " '100' rupees note." << endl;
        amnt = amnt % 100;
    }
    if (amnt > 50)
    {
        int h = amnt / 50;
        cout << "There are " << h << " '50' rupees note." << endl;
        amnt = amnt % 50;
    }
    if (amnt > 10)
    {
        int h = amnt / 10;
        cout << "There are " << h << " '10' rupees note." << endl;
        amnt = amnt % 10;
    }
    if (amnt > 2)
    {
        int h = amnt / 2;
        cout << "There are " << h << " '2' rupees note." << endl;
        amnt = amnt % 2;
    }
    if (amnt >= 1)
    {

        cout << "There are " << amnt << " '1' rupee coin.";
    }
}