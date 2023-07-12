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
    void DeleteAtHead()
    {
        if(head==NULL)
            return;

        node *a=head;
        node *b=head->nxt;
        delete a;

        if(b!=NULL)
            b->prv=NULL;

        head=b;
        sz--;
    }
    void Delete(int index) //O(n)
    {
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a= a->nxt;
            cur_index++;
        }
        node *b=a->prv;
        node *c= a->nxt;
        if(b!= NULL)
        {
            b-> nxt = c;
        }
        if(c!=NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head =c;
        }
        sz--;
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
    //Reverse the doubly list o(n)
    void Reverse()
    {
        if(head == NULL)
        {
            return ;
        }

        node *a = head;
        int cur_index = 0;
        while (cur_index != sz-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b = head;
        while (b!= NULL)
        {
            swap(b->nxt,b->prv);
            b= b->prv;
        }
        head=a;
    }
};
//Stack Using Doubly Linked list
class Stack
{
public:
    DoublyLinkedList dl;

    Stack()
    {

    }
    int top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack Is Empty\n";
            return -1;
        }
        return dl.head->data;
    }
    void push(int val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"StackIsEmpty\n";
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}