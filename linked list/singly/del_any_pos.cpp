// insert an element at any position
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void insert(int n)
{

    head = (struct node *)malloc(sizeof(struct node));
    int input;
    cout << "give elements\n";
    cin >> input; // creating 1st node and assigning the address in head.
    head->data = input;
    head->next = NULL;
    node *temp = head;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> input;
        node *current = (struct node *)malloc(sizeof(struct node));
        current->data = input;
        current->next = NULL;
        temp->next = current;
        temp = current;
    }
}
void deleteAtPosition(int pos)
{
    node *temp = head;
    node *prenode;
    for (int i = 1; i < pos; i++)
    {
        prenode = temp;
        temp = temp->next;
    }
    prenode->next = temp->next;
    free(temp);
}
void print_nodes()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cout << "no of elenent\n";
    cin >> n;
    insert(n);
    int p;
    cout << "Give position\n";
    cin >> p;
    deleteAtPosition(p);

    print_nodes();
}