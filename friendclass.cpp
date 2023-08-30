#include<bits/stdc++.h>
using namespace std;

class Employee{
private:
	string name;
	int age;
public:
	Employee(string word, int val){
		name = word;
		age = val;
	}
friend class Student;
	
	
};

class Student{
private:
	int marks;
public:
	Student(int data){
		marks= data;
	}

	void display(Employee person){
        cout<<person.name<<endl<<person.age<<endl;
        
	}

};

int main(){
	
	Employee person("Ayan",19);
	Student s1(98);
	s1.display(person);
    
	return 0;
}
