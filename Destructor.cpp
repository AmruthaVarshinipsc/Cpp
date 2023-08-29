#include<bits/stdc++.h>
using namespace std;

class HumaBeing{
private:
	string *name;
	int *age;
public:
	HumaBeing(string word = "No name", int val = 0){
		name= new string;
		age= new int;
		*name = word;
		*age = val;
	}
    ~HumaBeing(){
    	delete name;
    	delete age;
    }
	
};

int main(){
	
	HumaBeing *person = new HumaBeing();
	delete person;
	return 0;
}
