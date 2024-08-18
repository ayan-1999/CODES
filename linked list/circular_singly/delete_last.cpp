#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;

void insert(int n)
{
    head = NULL;

    int input;
    cout << "give elements\n";
    cin >> input;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = input;
    head->next = head; // Make the first node point to itself

    node *temp = head;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> input;
        node *current = (struct node *)malloc(sizeof(struct node));
        current->data = input;
        current->next = head; // Make the last node point back to the first node

        temp->next = current;
        temp = current;
    }
}
void deletelast()
{

    node *temp = head;
    node *prenode;
    while (temp->next != head)
    {
        prenode = temp;
        temp = temp->next;
    }
    prenode->next = head;
    free(temp);
}
void print_nodes()
{
    struct node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    int n;
    cout << "no of elements\n";
    cin >> n;
    insert(n);
    deletelast();
    print_nodes();

    return 0;
}
