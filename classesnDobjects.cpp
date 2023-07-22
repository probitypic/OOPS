#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    // data members
    string name;
    string phone;
    string email;
    string branch;

    // Student()
    // {
    //     name = "";
    //     phone = "";
    //     email = "";
    //     branch = "";
    // }

    Student(string nm = "", string ph = "", string em = "", string br = "")
    {
        name = nm;
        phone = ph;
        email = em;
        branch = br;

        cout << name << " is created" << endl;
    }

    ~Student()
    {
        cout << name << " is deleting " << endl;
    }

    // member function
    void set_data(string nm, string ph, string em, string br)
    {
        name = nm;
        phone = ph;
        email = em;
        branch = br;
    }

    void get_data()
    {
        cout << "name : " << name << endl;
        cout << "phone : " << phone << endl;
        cout << "email : " << email << endl;
        cout << "branch : " << branch << endl;
        cout << "\n\n----------------------\n";
    }
};

int main()
{
    system("clear");

    //  DataType * pointerName = new DataType(value);
    int *a = new int(5);

    // Student aditya("aditya", "1213123", "email.id", "it");
    // aditya.get_data();

    // Student classA[] = {Student("niraj", "112312", "email", "it"), Student("niraj", "112312", "email", "it"), Student("niraj", "112312", "email", "it"), Student("niraj", "112312", "email", "it")};

    // vector<Student> classA;

    // int n;
    // cin >> n;

    // string name, no, email, branch;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter your name ";
    //     cin >> name;
    //     cout << "Enter your phone ";
    //     cin >> no;
    //     cout << "Enter your email ";
    //     cin >> email;
    //     cout << "Enter your branch ";
    //     cin >> branch;

    //     Student stud(name, no, email, branch);

    //     classA.push_back(stud);
    // }

    // for (int i = 0; i < classA.size(); i++)
    // {
    //     classA[i].get_data();
    // }

    Student *aditya = new Student("aditya", "13123123", "mail", "it");
    Student *ash = new Student("ashwing", "13123123", "mail", "it");
    Student *shubham = new Student("shubham", "13123123", "mail", "it");
    delete ash;
    delete aditya;
    delete shubham;
}