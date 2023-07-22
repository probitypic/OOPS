#include <iostream>
using namespace std;

class Student
{
    int marathi, hindi, english, maths, science;

public:
    Student(int m, int h, int e, int ma, int s)
    {
        maths = m;
        hindi = h;
        english = e;
        maths = ma;
        science = s;
    }

    void display()
    {
        cout << marathi << hindi << english << maths << science;
    }

    float get_percentage()
    {
        return (float)((marathi + hindi + english + maths + science) * 100) / 500;
    }
};

int main()
{
    system("clear");

    Student aditya(84, 89, 78, 40, 70);
    cout << aditya.get_percentage();
}