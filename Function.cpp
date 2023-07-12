#include<bits/stdc++.h>
using namespace std;
string erasee(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}
int main()
{
    string s;
    cin>>s;

    string ans = erasee(s);
    cout<<s<<"\n";
    cout<<ans<<"\n";
    return 0;
}

