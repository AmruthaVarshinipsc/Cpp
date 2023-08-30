//Example 1 (Public Case)
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

//Example 2.1(Protected Case)
#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
	string name;
	int age;
public:
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


//Example 2.2
#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
	string name;
	int age;
public:
	void SetName(string myname){
		name = myname;
	}
	void SetAge(int val){
		age=val;
	}
	

};
class Student:protected Human{
public:
	int id;
	void SetId(int val){
		id = val;
	}
	void display(){
		cout<<name<<" "<<age<<" "<<id<<endl;
	}
	void SetData(string myname, int val, int data){
		name = myname;
		age = val;
		id = data;
	}
};
int main()
{
	Student one;
	one.SetData("Emlie",23,235);
	one.display();
}
