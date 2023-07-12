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
    int getSize()
    {
        return dl.getSize();
    }
};

int main() 
{
    //Sort a stack Using another stack:O(N^2)
    Stack<int>st;
    st.push(4);
    st.push(6);
    st.push(3);
    st.push(7);
    st.push(5);
 
    Stack<int>tmp;

    while(st.getSize()>0)
    {
        int t=st.top();
        st.pop();
        while(tmp.getSize()>0)
        {
            if(tmp.top()<t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st,tmp);
    while(st.getSize()>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }

    return 0;
}

