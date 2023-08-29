//Constructor
//Constructor is called by default when we create a object 

#include<bits/stdc++.h>
using namespace std;

class HumaBeing{
private:
	string name;
	int age;
public:
	HumaBeing(){
		this->name = "No name";
		this->age = 0;
	}
	HumaBeing(string word, int val){
		name = word;
		age = val;
	}
	HumaBeing(string word){
		name = word;
		age = 0;
	}
	HumaBeing(int val){
		name = "No name";
		age = val;
	}
	HumaBeing(HumaBeing &person){  //copy constructor
		name = person.name;
		age = person.age;

	}

	void display(){
		cout<<"Hi! I'm "<<name<<endl;
		cout<<"I'm "<<age<<" years old"<<endl<<endl;
	}

};

int main(){
	
	HumaBeing person("Ayan", 19);
	HumaBeing person1("Magnus");
	HumaBeing person2(20);
	HumaBeing person3;
	HumaBeing person4(person);
	person.display();
	person1.display();
	person2.display();
	person3.display(); 
    person4.display();
	return 0;
}
