#include<bits/stdc++.h>
using namespace std;
void swapp(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swapp(a,b);

    cout<<a<<" "<<b;
    return 0;
}
