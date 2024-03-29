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






//Example 3
#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	Person(){
		cout<<"Constructor of Base class is called"<<endl;
	}
	~Person(){
		cout<<"Destructor of Base class is called"<<endl;	
	}	
};
class Student:public Person{
public:
	Student(){
		cout<<"Constructor of child class is called"<<endl;
	}
	~Student(){
		cout<<"Destructor of child class is called"<<endl;
	}
};
int main()
{
	Student one;	
}
//Output:
// Constructor of Base class is called
// Constructor of child class is called
// Destructor of child class is called
// Destructor of Base class is called











