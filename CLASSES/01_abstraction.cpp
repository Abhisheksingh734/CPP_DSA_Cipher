#include <bits/stdc++.h>
using namespace std;

class student
{

    int reg = -1;
    string name;
    string stream;
    bool fees = false;

    void Register(string name, string stream)
    {

        if (fees == true)
        {
            this->name = name;
            this->stream = stream;
            this->reg = 1 + rand() % 100;

            cout << "Registration successful"
                 << "\n";
        }

        else
        {
            cout << "Fees not paid, contact school authority"
                 << "\n";
        }
    }

public:
    void regRequest(string name, string stream)
    {

        Register(name, stream);
    }

    int getReg()
    {
        return this->reg;
    }

    void payfees()
    {
        this->fees = true;
    }
};

int main()
{

    student s1;
    s1.payfees();
    s1.regRequest("Vishal", "Science");

    cout << s1.getReg() << "\n";
    return 0;
}