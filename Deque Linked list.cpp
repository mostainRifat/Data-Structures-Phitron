#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data ;
    node* prv;
    node* nxt;
};

class Deque{
public:
    node* head;
    node* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail= NULL;
        sz=0;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode-> data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void push_back(int value)//O(1)
    {
        node* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return ;
        }
        tail->nxt=newnode;
        newnode->prv=tail;
        tail =newnode;
        sz++;
    }
    void push_front(int value)
    {
        node* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return ;
        }
        head->prv=newnode;
        newnode->nxt =head;
        head = newnode;
        sz++;
    }
    void pop_back()//O(1)
    {
        if(sz==0)
        {
            cout<<"Deque is empty"<<"\n";
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail= NULL;
            sz--;
            return ;
        }
        node *a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty"<<"\n";
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail= NULL;
            sz--;
            return ;
        }
        node* a = head;
        head = head->nxt;
        delete a;
        head->prv= NULL;
        sz--;
    }
    int front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }
    int back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }
};

int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back:"<<d.back()<<" Front :"<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back:"<<d.back()<<" Front :"<<d.front()<<"\n";

}
/*void deleteValue(list<int>& l, int value) {
    
    for (auto it = l.begin(); it != l.end(); ++it) {
        if (*it == value) 
        {
            l.erase(it);    
            return;
        }
    }
}*/
