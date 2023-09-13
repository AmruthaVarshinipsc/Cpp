//complime time polymorphism
//function overloading
#include<bits/stdc++.h>
using namespace std;

/*class A{
public:
	void add(int x,int y){
		cout<<x+y<<endl;
	}
	void add(int x,int y,int z){
	cout<<x+y+z<<endl;
    } 
};
int main(){
	A a;
	a.add(10,20);
	a.add(20,30,50);
}*/



//operator overloading method 1
/*class Complex
{
private:
	int x,y;
public:
	Complex(int i=0,int j=0){
		x=i;
		y=j;
	}
	void print(){
		cout<<x<<"+"<<y<<"i"<<endl;
	}
	Complex operator+(Complex &c1){
		Complex temp;
		temp.x = c1.x+x;
		temp.y = c1.y+y;
		return temp;
	}
	
};
int main(){
	Complex c1(3,4);
	Complex c2(7,2);
	c1.print();
	c2.print();
	Complex c3;
	c3 = c2+c1;
	c3.print();

}*/




//operator overloading method 2
class Complex
{
private:
	int x,y;
public:
	Complex(int i=0,int j=0){
		x=i;
		y=j;
	}
	void print(){
		cout<<x<<"+"<<y<<"i"<<endl;
	}
	Complex add(Complex &c1){
		Complex temp;
		temp.x = c1.x+x;
		temp.y = c1.y+y;
		return temp;
	}
	
};
int main(){
	Complex c1(3,4);
	Complex c2(7,2);
	c1.print();
	c2.print();
	Complex c3;
	c3 = c2.add(c1);
	c3.print();

}



