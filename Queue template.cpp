#include<bits/stdc++.h>
using namespace std;

template<class T>

class Queue
{
public:
    T *a;
    int array_cap;
    int l,r,sz;
    
    Queue()
    {
        a=new T[1];
        array_cap = 1;
        l=0;
        r=-1;
        sz=0;
    }
    
    void increase_size()
    {
        T *tmp= new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
            tmp[i]=a[i];
        swap(a,tmp);

        array_cap=array_cap*2;
        delete[]tmp;
    }

    void enqueue(T value)//O(1)
    {
        if(sz==array_cap)
        {
            increase_size();
        }
        r++;
        if(r==array_cap)
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
        if(l==array_cap)
        {
            l=0;
        }
        sz--;
    }

    T front()//O(1)
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue<int> q;
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