#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, a[3];
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);

    for(i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
