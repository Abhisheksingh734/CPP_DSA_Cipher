#include <bits/stdc++.h>
using namespace std;
int moves = 0;
void toh(int n, char source, char auxiliary, char destination)
{
    moves++;
    if (n == 1)
    {
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    }
    else
    {
        toh(n - 1, source, destination, auxiliary);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        toh(n - 1, auxiliary, source, destination);
    }
}

int main()
{
    toh(2, 'A', 'B', 'C');
    cout << "Moves " << moves;
    return 0;
}