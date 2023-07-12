#include<bits/stdc++.h>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    ifstream ifs;
    ifs.open("0.txt");
    int x;
    double y,z;
    cout<<x<<" "<<y<<"  "<<z;
    //of<<"Hello World";
    //of2<<"Hello OF2";

    ifs.close();
    of.close();
    of2.close();
    return 0;
}
