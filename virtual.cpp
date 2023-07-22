#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string nm, int rl)
    {
        name = nm;
        age = rl;
    }

    virtual void Display()
    {
        cout << name << " " << age;
    }
};

class Student : public Person
{
    string branch;

public:
    Student(string nm, int rl, string br) : Person(nm, rl)
    {
        branch = br;
    }

    void Display()
    {
        cout << branch;
    }
};

int main()
{
    system("clear");

    // Student s("niraj", 1, "comp");
    // s.Display();

    Person *p = new Student("niraj", 1, "comp");

    p->Display();
}