//Set and Get Method to access private members
#include<bits/stdc++.h>
using namespace std;

class HumaBeing{
private:
	string name;
	int age;
public:
	void SetData(string word, int val){
		name = word;
		age = val;
	}
	void GetData(){
		cout<<"Hi! I'm "<<name<<endl;
		cout<<"I'm "<<age<<" years old"<<endl;
	}

};

int main(){
	
	HumaBeing person;
	person.SetData("Ayan", 19);
	person.GetData();

	return 0;
}
