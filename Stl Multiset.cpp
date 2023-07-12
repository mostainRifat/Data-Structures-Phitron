#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> a;

    a.insert(5); // O(log n)
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

    // Print O(n)
    cout << "Printing elements : ";
    for (auto it : a)
        cout << it << " ";
    cout << endl;

    cout << "Multiset Size : " << a.size() << endl; // O(1)

    // erase O(log n)
    // erase all occourance
    a.erase(4);
    cout << "Printing elements after erase : ";
    for (auto it : a)
        cout << it << " ";
    cout << endl;

    // erase one occurance
    a.erase(a.find(7));
    cout << "Printing elements after erase : ";
    for (auto it : a)
        cout << it << " ";
    cout << endl;

     //Find O(log n)
    if(a.find(5 ) != a.end())
        cout<<"Found \n";
    else
        cout<<"Not Found \n";

    return 0; 
}