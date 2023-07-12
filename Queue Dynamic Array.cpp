#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;

class Queue
{
public:
    int a[max_size];
    int l,r,sz;
    
    Queue()
    {
        l=0;
        r=-1;
        sz=0;
    }

    void enqueue(int value)//O(1)
    {
        if(sz==max_size)
        {
            cout<<"Queue is Full\n";
            return ;
        }
        r++;
        if(r==max_size)
        {
            r=0;
        }
        a[r]=value;
        sz++;
    }

    void dequeue()//O(1)
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return ;
        }
        l++;
        if(l==max_size)
        {
            l=0;
        }
        sz--;
    }

    int front()//O(1)
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    int size()//O(1)
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);

    cout<<"size:" <<q.size()<<"\n";
    cout<<q.front()<<"\n";

    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    
    cout<<"size:" <<q.size()<<"\n";

    return 0;
}