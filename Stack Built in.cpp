#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    //push
    st.push(10);
    st.push(20);
    st.push(30);

    //size
    cout<<"stack size: "<<st.size()<<"\n";

    //top
    cout<<st.top()<<"\n";

    //pop
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}