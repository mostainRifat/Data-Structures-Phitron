#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int getLast()
    {
        node * a= head;

        if(head == nullptr)
            return -1;

        while(a->nxt != nullptr)
        {
            a=a->nxt;
        }    
        return a->data;

    }

    double getAverage()
    {
        node* a= head;
        double m=0,total=0;
        while(a!=NULL)
        {
            total += a->data;
            a= a->nxt;
            m++;
        }
        
        return (total/m);
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(19);
    l.InsertAtHead(5);
    l.InsertAtHead(1);
    l.Traverse();

    double p = l.getAverage();
    cout<<" Average = "<<p<<endl;

    int k = l.getLast();
    cout<< "last : "<<k<<endl;

    return 0;
}