#include <bits/stdc++.h>
using namespace std;

class ABC
{
public:
    int x = 0;
    int y = 1;
    int arr[5] = {5, 6, 8, 9, 0};
};

int main()
{

    ABC arr[5];

    ABC *newObj = new ABC();
    // pointer objects
    for (int i = 0; i < 5; i++)
    {
        cout << newObj->arr[i] << " " << newObj->arr[i] << "\n";
    }
}