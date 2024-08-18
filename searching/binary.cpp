#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "give array length" << endl;
    cin >> n;
    int a[n];
    cout << "give the elements of array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int terget;
    cout << "give the element u want to find." << endl;
    cin >> terget;
    int low = 0;
    int high = n - 1;
    int x = -1;
    // loop runs until low is lower than high
    while (low <= high)
    { // initially we are reducing the search space to half of the previous.
        int mid = (low + high) / 2;
        // then finding if terget is on right or left or  equal to mid
        if (a[mid] == terget)
        {
            x = mid;
            break;
        }
        else if (a[mid] > terget)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (x == -1)
    {
        cout << terget << " not found.";
    }
    else
    {
        cout << x << " is the index.";
    }
}
