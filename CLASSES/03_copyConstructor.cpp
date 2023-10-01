#include <bits/stdc++.h>
using namespace std;

class A
{

    int data;

public:
    A(int data)
    {
        this->data = data;
    }

    // copy constructor
    A(const A &obj)
    {

        this->data = obj.data;
    }

    int get()
    {
        return this->data;
    }
};

int main()
{

    A obj1(10);
    A obj2(obj1);

    cout << obj2.get() << "\n";

    return 0;
}