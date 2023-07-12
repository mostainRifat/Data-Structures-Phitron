#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;

    Student(string s,int id,int ag,string f_name,string m_name)
    {
        name = s;
        std_id =id;
        age=ag;
        father_name=f_name;
        mother_name=m_name;
    }
    void print_inform()
    {
        cout<<name<<"  "<<std_id<<"  "<<age<<"  "<<father_name<<"  "<<mother_name<<"\n";
    }
};

int main()
{
    Student s("A",10,20,"BB","CC");

    s.print_inform();
    return 0;
}
