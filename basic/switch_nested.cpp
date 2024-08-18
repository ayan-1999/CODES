#include <iostream>
using namespace std;
int main()
{
    char xyz = 'n';
    int inp = 3;
    switch (xyz)
    {
    case 'm':
        cout << "a";
        break; // break is not mandatory.if break is not given everything after this will be executed.
    case 'n':
        switch (inp) // there can be a switch inside another switch.
        {
        case 3:
            cout << "jk" << endl;
            break;
        }
        cout << "b";
        break;
    default: // default is not mandatory.
        cout << "c";
    }
}