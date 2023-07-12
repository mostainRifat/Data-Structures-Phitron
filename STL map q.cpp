#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> prev;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (prev.find(str) == prev.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << prev[str] <<endl;
        }
        prev[str] = i;
    }

    return 0;
}
