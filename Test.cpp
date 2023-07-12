#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==b[i])
                k++;
        }
    }
    if(k==n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
