#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;//O(1)
    q.push(5);
    q.push(10);
    q.push(15);

    cout<<"Size"<<q.size()<<"\n";
    cout<<q.empty()<<"\n";
    cout<<q.front()<<"\n";//O(1)
    q.pop();

    cout<<q.front()<<"\n";//O(1)
    q.pop();

    cout<<q.front()<<"\n";//O(1)
    q.pop();
    

    return 0;
}