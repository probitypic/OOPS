#include <iostream>
using namespace std;

// Class Forward Declaration
//  Class Clasname
class Complex;

class Calculator
{
public:
    Complex Addition(Complex, Complex);
};

class Complex
{
    int r, i;

public:
    Complex(int a = 0, int b = 0)
    {
        r = a;
        i = b;
    }

    void Display()
    {
        cout << r << " + " << i << "i" << endl;
    }
    // friend return_type_of_fn

    // Case -> 1
    // Complex Class -> Additon()
    //  friend Complex Addition(Complex,Complex)

    // Case -> 2
    // Complex Class -> Calculator Class -> Addition()
    // friend Complex Calculator ::Addition(Complex, Complex);

    // Case ->3
    // Complex class -> Calculator Class
    friend class Calculator;

    // returnType operator
    Complex operator+(Complex rhs)
    {
        Complex c;
        c.r = r + rhs.r;
        c.i = i + rhs.i;
        return c;
    }

    Complex operator+(int n)
    {
        Complex c;

        c.r = r + n;
        c.i = i + n;

        return c;
    }

    Complex operator*(int n)
    {
        Complex c;
        c.r = r * n;
        c.i = i * n;

        return c;
    }

    void operator-(int n)
    {
        cout << r - n << " + " << i - n;
    }
};

// ReturnType ClassName :: FunctionName(DataTypes)
Complex Calculator ::Addition(Complex a, Complex b)
{
    Complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}

int main()
{
    system("clear");

    Complex a(5, 7), b(2, 7);
    Calculator cal;

    // Complex d = a * 5;

    // d.Display();
}