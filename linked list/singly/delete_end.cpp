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
void deleteLast()
{
    node *temp = head;
    node *prenode;
    while (temp->next != NULL)
    {
        prenode = temp;
        temp = temp->next;
    }
    prenode->next = NULL;
    free(temp);
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
    cout << "no of elenent\n";
    cin >> n;
    insert(n);
    deleteLast();
    print_nodes();
}