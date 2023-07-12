#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;

    pq.push(10);//O(Log n)
    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(9);

    while(pq.size() !=0)
    {
        cout<<pq.top()<<" ";//top O(1)
        pq.pop(); // pop O(log n)
    }
    return 0;
}