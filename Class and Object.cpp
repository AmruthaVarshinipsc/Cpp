//22MH1A05K3
#include<bits/stdc++.h>
using namespace std;

class HumaBeing{
public:
	string name;
	void display();
	/*{
		cout<<"Hi! I'm "<<name<<endl;
	}*/

};
void HumaBeing :: display(){
	cout<<"Hi! I'm "<<name<<endl;
}
int main(){
	//in this way of creating objects, 
	//object is created in stack memory,
	//should use dot (.) operator
	HumaBeing person;
	person.name="Ayan";
	person.display();

	//in this way of creating objects, 
	//object is created in heap memory,
	//should use arrow (->) operator
	HumaBeing *Emlie = new HumaBeing();
	Emlie->name = "Emlie";
	Emlie->display();

    //all the details of ayan will be stored in magnus
	HumaBeing *Magnus = &person;
	//(*Magnus).display();
	Magnus->display();
	return 0;
}
