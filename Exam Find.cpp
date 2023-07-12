#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=1; i<n; i++)
        cin>> a[i];
    for(int i=1; i<=n; i++)
    {
        int x=0;
        for(int j=1; j<n; j++)
        {
            if(i ==a[j])
                x=1;
        }

        if(x!=1)
            cout<<i;
    }
return 0;
}
