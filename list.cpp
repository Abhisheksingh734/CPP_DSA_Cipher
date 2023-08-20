#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
	list<int> :: iterator iter;
	for(iter=lst.begin(); iter!=lst.end(); iter++){
		cout<< *iter<<" ";
	}
	cout<<endl;
}

int main(){
	
	list<int> l1; //list of zero length
	l1.push_back(5);
	l1.push_back(7);
	l1.push_back(12);
	l1.push_back(18);
	display(l1);
	
//	l1.pop_back();
//	l1.remove(7);
	display(l1);
	
	
	list<int> l2(3); //empty list of size 7
	list<int> :: iterator iter;
	iter = l2.begin();
	*iter = 45;
	iter++;
	*iter = 32;
	iter++;
	*iter = 45;
	display(l2);
	
	l1.merge(l2);
	cout<<"After merging ";
	display(l1);
	
	return 0;
}
