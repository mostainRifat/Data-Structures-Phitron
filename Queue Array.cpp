#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;

class Queue
{
public:
    int a[max_size];
    int l,r;
    
    Queue()
    {
        l=0;
        r=-1;
    }

    void enqueue(int value)//O(1)
    {
        if(r+1>max_size)
        {
            cout<<"Queue Full\n";
            return ;
        }
        r++;
        a[r]=value;
    }

    void dequeue()//O(1)
    {
        if(l>r)
        {
            cout<<"Queue empty\n";
            return ;
        }
        l++;
    }

    int front()//O(1)
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return 0;
        }
        return a[l];
    }

    int size()//O(1)
    {
        return r-l+1;
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