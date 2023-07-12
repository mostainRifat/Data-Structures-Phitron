#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>> a[i];
    cin>>k;

    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            for(int j=i+1; j<n; j++)
            {
                if (a[j]==k)
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
