#include <bits/stdc++.h>
using namespace std;

void sortArray(deque<int> &dq)
{
    deque<int> sortedDq;
    while (!dq.empty())
    {
        if (dq.front() <= dq.back())
        {
            sortedDq.push_back(dq.front());
            dq.pop_front();
        }
        else
        {
            sortedDq.push_back(dq.back());
            dq.pop_back();
        }
    }
    dq = sortedDq;
}

int main()
{
    int n;
    cin >> n;
    deque<int> lArray;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        lArray.push_back(num);
    }

    sortArray(lArray);

    cout << "Sorted Array: ";
    for (const auto &num : lArray)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
