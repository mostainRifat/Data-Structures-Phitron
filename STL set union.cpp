#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<int> set1;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        set1.insert(num);
    }

    cin >> m;
    set<int> set2;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        set2.insert(num);
    }

    set<int> unionSet;

    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(unionSet, unionSet.begin()));

    cout << "Union of the two sets: ";
    for (int num : unionSet)
    {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}
