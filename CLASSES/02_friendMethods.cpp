#include <bits/stdc++.h>
using namespace std;

class student; // forward declaration

class teacher
{

public:
    // only signature
    void accessReg(student s);
};

class student
{

    int reg;

public:
    student(int reg)
    {
        this->reg = reg;
    }

    friend void display(student s);
    friend void teacher ::accessReg(student s);
};

void teacher ::accessReg(student s)
{
    cout << s.reg << "\n";
}

// global
void display(student s)
{

    cout << s.reg << "\n";
}

int main()
{

    student s1(100);
    // s1.reg;
    // display(s1);
    teacher t;
    t.accessReg(s1);

    return 0;
}