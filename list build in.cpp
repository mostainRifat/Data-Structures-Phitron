#include<bits/stdc++.h>
using namespace std;

void print(list<int>&l)
{
    //O(n)
    //list<int>::iterator a = l.begin();
    auto a= l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}
void Insert(list <int> & l,int index, int value)
{
    auto it = l.begin();//O(1)
    advance (it,index);//O(index)
    l.insert(it,value);//O(1)
}
void Delete(list<int> &l,int index)
{
    auto it = l.begin();
    advance(it, index);//O(index);
    l.erase(it);
}

int main()
{
    list<int> l;
    l.push_front(10); //O(1)
    l.push_front(20);
    l.push_front(30);
    print (l);

    //cout<<"\n";
    l.push_back(40); // O(1)
    l.push_back(50);
    print(l);

    // pop back O(1);
    l.pop_front();
    print(l);

    // pop front O(1);
    l.pop_back();
    print(l);

    //insert at any position
    Insert(l,1,100);
    print(l);

    //Delete ar any position
    Delete(l,1);
    print(l); 

    //size
    cout<<l.size()<< "\n";
        
    return 0;
}