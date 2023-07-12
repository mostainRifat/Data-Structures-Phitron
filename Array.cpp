#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>> a[i];
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum =sum +a[i];
    }
    cout<<sum;

    return 0;
}
