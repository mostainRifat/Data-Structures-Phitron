#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    Heap()
    {
    }

    void PrintHeap() // O(n)
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }

    void down_heapify(int idx) // O(log n)
    {
        while (1)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if (l < nodes.size() && nodes[largest] < nodes[l])
                largest = l;

            if (r < nodes.size() && nodes[largest] < nodes[r])
                largest = r;

            if (largest == idx)
                break;

            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    void build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = ( n / 2);

        for (int i = last_non_leaf; i >= 0; i--)
            down_heapify(i);
    }
};

int main()
{
    MaxHeap h;

    vector<int> a = {1, 2, 3, 4, 10, 9, 8, 7};
    h.build_from_array(a);
    h.PrintHeap();

    return 0;
}