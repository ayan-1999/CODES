// search for an element
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
int search(int src)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == src)
        {
            return 1;
        }
        temp = temp->next;
    }
    return -1;
}
int main()
{
    int n;
    cout << "no of elenent\n";
    cin >> n;
    insert(n);
    int sr;
    cout << "Enter the element you want to find\n";
    cin >> sr;
    int k = search(sr);
    cout << ((k == 1) ? "found" : "not found");
}