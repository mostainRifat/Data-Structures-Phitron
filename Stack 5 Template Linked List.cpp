#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz=0;
    }
    //Creates new node with given data and returns it: O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //Insert a node with given data at head: O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return ;
        }
        node<T> *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head = newnode;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
            return;

        node<T> *a=head;
        node<T> *b=head->nxt;
        delete a;

        if(b!=NULL)
            b->prv=NULL;

        head=b;
        sz--;
    }

    int getSize()
    {
        return sz;
    }
};
//Stack Using Doubly Linked list
template<class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {

    }
    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack Is Empty!\n";
            T x;
            return x;
        }
        return dl.head->data;
    }
    void push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack Is Empty\n";
            return;
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack <double>st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.5);

    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";


    Stack<char>st2;
    st2.push('I');
    st2.push('L');
    st2.push('U');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";

    return 0;
}
