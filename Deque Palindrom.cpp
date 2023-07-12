#include<bits/stdc++.h>
using namespace std;

bool palindrom(const string& str)
{
    deque<char>dq;
    for( char ch : str)
    {
        dq.push_back(ch);
    }

    while(dq.size()>1)
    {
        if(dq.front()!=dq.back())
            return false;
        
        dq.pop_back();
        dq.pop_front();
    }
    return true;
}
int main()
{
    string str;
    cin>>str;

    if(palindrom)
        cout<<"Yes"<<"\n";
    else
        cout<<"NO"<<"\n";

    return 0;
}