#include <iostream>
using namespace std;

class student
{

public:
    int reg;
    string name;

    student()
    {
        cout << "Constructor wthout param\n";
    }
    student(int reg, string name)
    {
        this->reg = reg;
        this->name = name;
    }

    // method overloading

    // we can achieve polymorphism by method overloading
    void add(int a, int b)
    {
        cout << a + b << " int\n";
    }
    void add(float a, float b)
    {
        cout << a + b << " float\n";
    }
    void add(double a, double b)
    {
        cout << a + b << " double\n";
    }

    // default params
    void f(int a, int b = 10, int c = 10)
    {
        cout << a + b + c << "\n";
    }
};

//  wrapping up of data members and member methods as a single unit is called encapsulation(data hiding)

int main()
{
    student s1(1, "Abhishek");
    student s2;
    // s2.add(1, 2);
    // s2.add(1.8, 1.3);

    s2.f(10);
    // cout << s1.reg << " " << s1.name << "\n";

    return 0;
}
// operator overloading when + like operator behaves different