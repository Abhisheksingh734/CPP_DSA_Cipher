#include <bits/stdc++.h>
using namespace std;

struct Human
{
	string name;
};

enum Days
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
};

class Human
{

private: // access specifier
	string name;
	int age;
	string gender;

public:
	void setName(string name)
	{
		name = name;
	}

	string getName()
	{
		return name;
	}
};

int main()
{

	Human person1;
	Human *person2;

	// person1.name = "Abhishek";
	// person1.age = 22;
	// person1.gender = "Male";

	// person2 -> name = "Aman";
	// person2 -> age = 23;
	// person2 -> gender;

	// person1.setName("Abhishek");
	// cout << person1.getName();

	Days today = Tuesday;

	cout << today;

	return 0;
}
