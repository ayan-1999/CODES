// insert an element at any position
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
node *temp;
void insert(int input)
{
    node *current = (struct node *)malloc(sizeof(struct node));
    current->data = input;
    current->next = NULL;
    temp->next = current;
    temp = current;
}
void insertAtPosition(int pos, int dat)
{
    node *current = (struct node *)malloc(sizeof(struct node));
    current->data = dat;
    current->next = NULL;
    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    current->next = temp->next;
    temp->next = current;
}
void print_nodes()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cin >> n;

    head = (struct node *)malloc(sizeof(struct node));
    int input;
    cin >> input;
    head->data = input;
    head->next = NULL;

    temp = head;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> input;
        insert(input);
    }
    int p,el;
    cout << "Give position\n";
    cin >> p;
    cout << "Give element\n";
    cin >> el;

    insertAtPosition(p,el);

    print_nodes();
}