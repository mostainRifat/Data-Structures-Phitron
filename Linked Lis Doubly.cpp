#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates new node with given data and returns it: O(1)
    node *CreateNewNode(int data)
    {
        sz++;
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void insertHead(int data)
    {
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void insertMid(int data)
    {
        int index = sz / 2;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    void insertTail(int data)
    {
        node *a = head;
        while (a->nxt != NULL)
            a = a->nxt;

        node *newnode = CreateNewNode(data);
        newnode->nxt = NULL;
        newnode->prv = a;
        a->nxt = newnode;
        sz++;
    }

    void merge(const DoublyLinkedList &a)
    {
        node *curTail = head;
        while (curTail->nxt != nullptr)
        {
            curTail = curTail->nxt;
        }

        curTail->nxt = a.head;
        a.head->prv = curTail;
        sz += a.sz;
    }

    void print()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    int getSize()
    {
        return sz;
    }
};
int main()
{
    DoublyLinkedList a;
    DoublyLinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100

    return 0;
}
