#include <iostream>
using namespace std;

class Rectangle
{
    float len, wid;

public:
    Rectangle(float a, float b)
    {
        len = a;
        wid = b;
    }

    float Area()
    {
        return len * wid;
    }

    float Perimeter()
    {
        return (len * 2) + (wid * 2);
    }
};

int main()
{
    system("clear");

    Rectangle a(5.6, 8.9);
    cout << a.Area() << endl;
    cout << a.Perimeter() << endl;
}

/*

    Cpp
    DSA

    OS
    DBMS
    Networking

    Flutter
    Node JS

*/