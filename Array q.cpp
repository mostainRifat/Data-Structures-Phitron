#include <bits/stdc++.h>
using namespace std;

void removeAndSort(vector<int> &arr)
{
    int n = arr.size();

    int Count = 0;
    for (int i = 0; i < n; ++i)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; ++j)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            arr[Count++] = arr[i];
        }
    }

    for (int i = 0; i < Count - 1; ++i)
    {
        for (int j = 0; j < Count - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < Count; ++i)
        cout << arr[i] << " ";
    
}

int main()
{
    int n;
    cout << "size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    removeAndSort(arr);

    return 0;
}
