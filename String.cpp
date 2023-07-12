#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "IAm Eating Rice";
    string s2 = " and Dal";

    string s3 = s + s2;

//    cout<<s3<<"\n";
//    cout<<s3.size()<<"\n" ;
    s.pop_back();   //Deleting Last Character
    s.erase(s.begin()+0);  //Deleting First Character
    cout<<s<<"\n";

    return 0;
}
