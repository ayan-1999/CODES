#include <bits/stdc++.h>
#define max 10
using namespace std;

int st_arr[max];
int top = -1;

void push(int data)
{
    if (top == max - 1)
    {
        cout << "stack overflow\n";
        return;
    }
    top = top + 1;
    st_arr[top] = data;
}
int pop()
{
    if (top == -1)
    {
        cout << "stack underflow\n";
        exit(1);
    }
    int val;
    val = st_arr[top];
    top = top - 1;
    return val;
}
int peek()
{
    if (top == -1)
    {
        cout << "stack underflow\n";
        exit(1);
    }
    return st_arr[top];
}
void print()
{
    if (top == -1)
    {
        cout << "stack is empty\n";
    }
    for (int i = top; i > -1; i--)
    {
        cout << st_arr[i] << " ";
    }
}
int main()
{
    int choice, data;

    while (1)
    {
        cout << "\n";
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.display the top element\n";
        cout << "4.display all the element\n";
        cout << "5.quit\n";
        cout << "Emter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the data to be pushed : ";
            cin >> data;
            push(data);
            break;
        case 2:
            data = pop();
            cout << data;
            break;
        case 3:
            cout << "\ndata at the top is :" << peek() << endl;
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("\nWrong choice\n");
        } /*End of switch*/
    }     /*End of while*/

    return 0;
}
