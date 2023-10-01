#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    fstream myFile;

    myFile.open("sample1.txt", ios::out); // write mode
    if (myFile.is_open())
    {
        myFile << "Hello world\n";
        myFile << "This file is opened in write mode\n";
        myFile.close();
    }

    myFile.open("sample1.txt", ios::app); // append mode
    if (myFile.is_open())
    {
        myFile << "Hello world 2\n";
        myFile << "This file is opened in appended mode";
        myFile.close();
    }

    myFile.open("sample2.txt", ios::in); // read mode
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }

    return 0;
}