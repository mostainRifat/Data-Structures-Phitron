#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>a;

    for(int i=0;i<10;i++)
    {
       // cout<<"Before push"<<a.size()<<"\n";
        a.push_back(i);
        //cout<<"After Push"<<a.size()<<"\n";
    }
    a.insert(a.begin()+3 ,100);
    for(int i=0;i<a.sizeof();i++)
    {
        cout<<a[i]<<"\n";
    }

    return 0;
}
