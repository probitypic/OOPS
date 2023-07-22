#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    void getPersonalDetails()
    {
        cout << "name " << name << " "
             << "age " << age << endl;
    }
};

class Employye
{
    string sallary, department;

public:
    Employye(string sal, string dep)
    {
        sallary = sal;
        department = dep;
    }
};

class Student : public Person, Employye
{

    string stdid;
    int roll;

public:
    Student(string nm, int ag, string sal, string dep, string sid, int rl) : Person(nm, ag), Employye(sal, dep)
    {
        stdid = sid;
        roll = rl;
    }
};

int main()
{
    system("clear");

    Student s("niraj", 1, "3421", "comp", "1234", 1);
    s.getPersonalDetails();
}