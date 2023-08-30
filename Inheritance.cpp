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
	
	Student Ayan;
	Ayan.id = 1234;
	Ayan.name = "Ayan";
	Ayan.SetName("Emlie");
	Ayan.SetAge(23);
	Ayan.display();

	
}
