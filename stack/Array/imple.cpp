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
    push(2);
    push(3);
    push(4);
    push(5);
    int pval = pop();
    cout << "popped value is " << pval;
}
