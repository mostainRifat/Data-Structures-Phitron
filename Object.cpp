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

    void print_inform()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<father_name<<" "<<mother_name<<"\n";
    }
};


int main()
{
    Student s;
    s.name = "Rifat";
    s.std_id =2103023;
    s.age=20;
    s.father_name="Motaharul Islam";
    s.mother_name="Rafia Begum";

    s.print_inform();

    Student s2;
    s2.name = "Billa";
    s2.std_id =2103123;
    s2.age=20;
    s2.father_name="Motaharul Islam";
    s2.mother_name="Rafia Begum";

    s2.print_inform();

    return 0;
}
/* public
admin class user;
*/
