#include <bits/stdc++.h>
#define max 10
using namespace std;

int st_arr[max];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == max - 1)
    {
        cout << "stack overflow\n";
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = rear + 1;
        st_arr[rear] = data;
    }
}
int dequeue()
{
    if (front == -1)
    {
        cout << "stack underflow\n";
        exit(1);
    }
    int val;
    val = st_arr[front];
    front = front + 1;
    return val;
}
int peek()
{
    if (front == -1)
    {
        cout << "stack underflow\n";
        exit(1);
    }
    return st_arr[front];
}
void print()
{
    if (front == -1)
    {
        cout << "stack is empty\n";
    }
    for (int i = front; i <= rear; i++)
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
        cout << "1.enqueue\n";
        cout << "2.dequeue\n";
        cout << "3.display the front element\n";
        cout << "4.display all the element\n";
        cout << "5.quit\n";
        cout << "Emter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the data to be pushed : ";
            cin >> data;
            enqueue(data);
            break;
        case 2:
            data = dequeue();
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
