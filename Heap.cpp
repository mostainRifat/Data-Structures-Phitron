#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    Heap()
    {

    }

    void up_heapify(int idx) //O(log n)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    void insert(int x)  // O(log n)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    void PrintHeap()  // O(n)
    {
        for (int i = 0; i< nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }

    void down_heapify(int idx) // O(log n)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx +1;
            int r = 2*idx +2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
                largest = 1;
            
            if(r<nodes.size() && nodes[largest] < nodes[r])
                largest = r;

            if(largest == idx)
                break;
            
            swap(nodes[idx],nodes[largest]);
            idx = largest;       
        }
    }

    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;

        swap(nodes[idx] , nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"heap is empty \n";
            return -1;
        }
        return nodes[0];
    }

    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"heap is empty \n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
};

int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    cout<<"Max element = "<<heap.getMax()<<"\n";
    heap.PrintHeap();

    //heap.Delete(0);
    //heap.PrintHeap();
    cout<<"Max element = "<<heap.ExtractMax()<<"\n";
    cout<<"Max element = "<<heap.ExtractMax()<<"\n";
    
    return 0;
}