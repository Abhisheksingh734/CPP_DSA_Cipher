#include <bits/stdc++.h>
using namespace std;

void f(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    // int arr[] = {1, 5, 7, 4, 6};
    // f(arr);
    // cout << arr[1] << "\n"; // third element of array

    // int a = 1, b = 2;
    // f(&a, &b);

    // cout << a << " " << b;

    // int n;
    // cin >> n;

    // int *arr = new int[n];

    // cout << arr << "\n";

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // delete arr;

    // dangling pointer out of scope

    int *ptr = NULL;

    {
        int num = 5;
        ptr = &num;
    }

    // void pointers can take address of any data type but cannot be defference it(not a point-to-object type)
    //  you can do this by type casting it to *((int*) ptr)

    // ex- int, char

    return 0;
}