#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node * nxt;
};

template<class T>
class LinkedList
{
public:
    node<T>* head;
    int sz;

    LinkedList()
    {
        head =NULL;
        sz=0;
    }
    //Create a new node with Data = value & nxt=NULL
    node<T>* CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode -> data = value;
        newnode ->nxt = NULL;

        return newnode;
    }
    //Insert new value at Head
    void InsertAtHead(T value)
    {
        sz++;
        node<T> *a = CreateNewNode(value);
        if(head == NULL)
        {
            head =a ;
            return;
        }
        a->nxt = head;
        head =a;
    }
    
    int getSize()
    {
        return sz;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }
    
};

template<class T>
class Stack
{
public:
    LinkedList<T> l;

    Stack()
    {

    }
    T top()
    {
        if(l.getSize()==0)
        {
            cout<<"Stack Is Empty\n";
            return -1;
        }
        return l.head->data;
    }
    void push(T val)
    {
        l.InsertAtHead(val);
    }
    void pop()
    {
        if(l.getSize()==0)
        {
            cout<<"StackIsEmpty\n";
            return;
        }
        l.DeleteAtHead();
    }
};

int main()
{
    Stack<int> st;
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