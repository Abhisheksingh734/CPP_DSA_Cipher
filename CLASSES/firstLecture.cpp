#include<iostream>

using namespace std;

class Human{
	//member variables
	
	string name;
	int age;
	string gender;
	
	public:
	//member functions	
	
	//when using member variables in class use-> this
	
	Human(string n, int a, string g){
		name = n;
		age = a;
		gender = g;
	};
	
	void walking(){
		cout<<"Walking..."<<endl;
	}
	
	void talking(){
		cout<<"talking..."<<endl;
	}
	
};
int main(){
	
	Human person1("Abhishek", 20, "Male");
	person1.walking();
	
	return 0;
}

