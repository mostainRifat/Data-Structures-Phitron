#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(5); // O(log n)
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(8);

    cout << "Printing Set \n"; // O(n)
    for (auto i : st)
        cout << i << " ";
    cout << endl;

    cout << "Set size: " << st.size() << endl; // O(1)

    cout << "Printing Set \n"; // O(n)
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
    cout << endl;

    st.erase(5); // O(log n)
    cout << "Printing Set after erase \n";
    for (auto i : st)
        cout << i << " ";
    cout << endl;

    //Find O(log n)
    if(st.find(5 ) != st.end())
        cout<<" Found \n";
    else
        cout<<"Not Found \n";

    return 0;
}
