#include<bits/stdc++.h>
using namespace std;

const int max_size = 500;

class Queue
{
public:
    int *a;
    int array_cap;
    int l,r,sz;
    
    Queue()
    {
        a=new int[1];
        array_cap = 1;
        l=0;
        r=-1;
        sz=0;
    }
    void remove_circular()
    {
        if(l>r)
        {
            int *tmp=new int [array_cap];
            int idx=0;
            for(int i=l;i<array_cap;i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for(int i=0;i<=r;i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp,a);
            l=0;
            r=array_cap-1;
        }
    }
    void increase_size()
    {
        remove_circular();
        int *tmp=new int[array_cap*2];
        for(int i=0;i<array_cap;i++)
            tmp[i]=a[i];
        swap(a,tmp);

        array_cap=array_cap*2;
        delete[]tmp;
    }

    void enqueue(int value)//O(1)
    {
        if(sz==array_cap)
        {
            increase_size();
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