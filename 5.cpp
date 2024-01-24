/*
5). WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

Enter P:5
Enter Q:8
Enter R:9
______
cube of A is:125
square of A is:25
cube of B is:512
square of B is:64
cube of C is:729
square of C is:81

*/
#include<iostream>
using namespace std;

class A{
	public:
		int p;
		int q;
		int r;
	public:	
		void getA(){
			cout<<"Enter P:";
			cin>>p;
			cout<<"Enter Q:";
			cin>>q;
			cout<<"Enter R:";
			cin>>r;
		}	
};
class B : public A
{
	public:	
		void getB(){
			cout<<"______"<<endl;
			cout<<"cube of A is:"<<p*p*p<<endl;
			cout<<"square of A is:"<<p*p<<endl;
			cout<<"cube of B is:"<<q*q*q<<endl;
			cout<<"square of B is:"<<q*q<<endl;
			cout<<"cube of C is:"<<r*r*r<<endl;	
			cout<<"square of C is:"<<r*r<<endl;	
		}
};
int main(){
	B b1;
	
	b1.getA();
	b1.getB();
	
	return 0;
}
