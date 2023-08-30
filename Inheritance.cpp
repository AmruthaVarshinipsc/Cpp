//Example 1
#include<bits/stdc++.h>
using namespace std;

class Human{
public:
	string name;
	int age;
	void SetName(string myname){
		name = myname;
	}
	void SetAge(int val){
		age=val;
	}
	

};
class Student:public Human{
public:
	int id;
	void SetId(int val){
		id = val;
	}
	void display(){
		cout<<name<<" "<<age<<" "<<id<<endl;
	}
};
int main()
{
	
	Student one;
	one.SetId(1234);
	one.SetName("Emlie");
	one.SetAge(23);
	one.display();

	
}
