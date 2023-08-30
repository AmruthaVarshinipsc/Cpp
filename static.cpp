#include<bits/stdc++.h>
using namespace std;

class Human{
public:
	static int Human_count;
	Human(){
		Human_count++;
	}
	void Display(){
		cout<<Human_count<<endl;
	}
	static void display(){
		cout<<"Hi "<<Human_count<<endl;
	}

};
int Human::Human_count = 0;
int main()
{
	
	
	cout<<Human::Human_count<<endl;
	Human Ashok;
	Human::display();
	Human Assu;
	Ashok.Display();

	
}
