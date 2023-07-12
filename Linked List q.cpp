#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};
class DoublyLinkedList
{
public:
    node  *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz=0;
    }
    //Creates new node with given data and returns it: O(1)
    node * CreateNewNode(int data)
    {
        sz++;
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //Insert a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return ;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head = newnode;
    }
    //Inserts the given data at the given Index; O(n)
    void Insert(int index,int data)
    {
        if(index > sz)
            return ;
        if(index == 0)
        {
            InsertAtHead(data);
            return ;
        }
        node *a=head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(data);
        newnode ->nxt =a->nxt;
        newnode ->prv =a;
        node *b= a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    
    //O(n)
    void Traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    
    int getSize()
    {
        return sz;
    }
    
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.Traverse();

    dl.Insert(2,100);
    dl.Traverse();

    dl.Reverse();
    dl.Traverse();
    return 0;
}
