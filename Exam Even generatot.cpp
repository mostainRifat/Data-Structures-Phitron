#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a)
{
    vector<int>even;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0 && a[i]!=0)
        even[i]=a[i];
    }
    return even;
}
int main()
{
    vector<int>a(5);
    for(int i=0;i<5;i++)
        cin>>a[i];

    vector<int>ans(5);
    ans=even_generator(a);
    for(int i=0;i<a.size();i++)
        cout<<ans[i]<<" ";

    return 0;
}
