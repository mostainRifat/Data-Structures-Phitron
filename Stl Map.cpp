#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    //Insert O(log n)
    mp["ron"] = 7;
    mp["neimi"] = 10;
    mp["messi"] = 10;
    mp["vini"] = 20;

    //value of a key
    cout<<mp["neimi"]<<endl;

    //print the map
    //auto sort key
    for(auto it: mp)
    {
        cout<<"Key : "<<it.first<< "-->"<<it.second<<endl;
    }

    return 0;
}