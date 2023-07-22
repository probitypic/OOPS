#include <iostream>
using namespace std;

class Person
{
public:
    string name, email, phoneno, gender;
};

class employee
{
public:
    int empid;
    string sallary;
};

class Student : private Person, public employee
{
    int std_id, roll_no;

public:
    Student(string nm, string em, string ph, string ge, int id, int roll)
    {
        name = nm;
        email = em;
        phoneno = ph;
        gender = ge;
        std_id = id;
        roll_no = roll;
    }
};

class CR : public Student
{
};

main()
{
    system("clear");
}