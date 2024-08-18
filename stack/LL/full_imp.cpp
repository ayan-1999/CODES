#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *top = NULL;
void push(int dta)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = dta;
    newnode->next = NULL;

    newnode->next = top;
    top = newnode;
}
int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int pop()
{

    if (isEmpty())
    {
        cout << "stack underflow";
        exit(1);
    }
    node *temp = top;
    int val = temp->data;
    top = temp->next;
    free(temp);
    temp = NULL;
    return val;
}
int peek()
{
    if (isEmpty())
    {
        cout << "stack underflow";
        exit(1);
    }
    return top->data;
}
void print()
{
    if (isEmpty())
    {
        cout << "stack underflow";
        exit(1);
    }
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
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
