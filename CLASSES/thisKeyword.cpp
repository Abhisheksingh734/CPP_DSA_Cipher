#include <iostream>
using namespace std;

class student
{

public:
	int reg = 3;
	string name;

	// class variable
	static string college;

	// instance methods (depend on objects)
	void setReg(int reg)
	{
		// instance variable        parameter
		this->reg = reg;
	}

	// class methods (does not depend upon objects) // always use class name and :: to access the method
	static void collegeName(string college, int reg)
	{
		// this->reg = reg;
		student::college = college;
	}
};

string student::college = "CU";
int main()
{

	student s1;
	s1.setReg(1);
	cout << s1.reg;

	student::collegeName("LPU", 2);
	cout << student::college;

	cout << endl;
	s1.collegeName("LU", 3);
	cout << s1.college << s1.reg;
	return 0;
}

// CLASS NOTES

// #include <bits/stdc++.h>
// using namespace std;

// class student{

// public :

// 000  // instance variables
// int reg;
// string name;

// 000 // class variable
// static string college;

// void setReg(int reg){

//  000 // instance variable parameter
// this->reg = reg;
// }

// static void collegeName(string college, int reg){
// student :: college = college;
// }

// };

// string student::college = "LPU";

// int main() {

// student s1;
// s1.setReg(1);
// student::collegeName("CU");

// cout<<s1.name<<" "<<student :: college<<"\n";

// return 0;
// }