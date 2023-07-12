#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>s= {3,4,6,1,9};
    for(int i=0; i<s.size(); i++)
        cout<<s[i]<<" ";

    cout<<"\nAfter Sort\n";
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
        cout<<s[i]<<" ";

    return 0;
}
