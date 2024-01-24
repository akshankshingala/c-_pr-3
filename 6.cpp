/*
6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

*/
#include<iostream>
using namespace std;

class X{
	public:
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string com_name;
		string address;
		string email;
		int contact;
	public:
		void setX(){	
			cout<<"Enter your id:"<<endl;
			cin>>id;
			cout<<"Enter your name:"<<endl;
			cin>>name;
			cout<<"Enter your role in company:"<<endl;
			cin>>role;
	}
};
class Y : public X
{
	public:
		void setY(){
			cout<<"Enter your salary:"<<endl;
			cin>>salary;
			cout<<"Enter your experience:"<<endl;
			cin>>experience;
			cout<<"__________"<<endl;
		}	
};
class U : public Y
{
	public:
		void getU(){
			cout<<"NAME IS   :"<<name<<endl
				<<"ROLE IS   :"<<role<<endl
				<<"SALARY IS :"<<salary<<endl;
			cout<<"___________"<<endl;
		}
		
		void setU(){
			cout<<"Enter your company name:"<<endl;
			cin>>com_name;
			cout<<"Enter company address:"<<endl;
			cin>>address;
		}	
};
class Z : public U
{
	public:
		void setZ(){
			cout<<"Enter your email:"<<endl;
			cin>>email;
			cout<<"Enter your contact number:"<<endl;
			cin>>contact;
			cout<<"___________"<<endl;
		}
			
		void getZ(){
			cout<<"ID IS             :"<<id<<endl
				<<"NAME IS           :"<<name<<endl
				<<"ROLE IS           :"<<role<<endl
				<<"SALARY IS         :"<<salary<<endl
				<<"EXPERIENCE IS     :"<<experience<<endl
				<<"COMPANY NAME IS   :"<<com_name<<endl
				<<"ADDRESS IS        :"<<address<<endl
				<<"EMAIL IS          :"<<email<<endl
				<<"CONTACT NUMBER IS :"<<contact<<endl;
		}
};
int main(){
	Z z1;
	
	z1.setX();
	z1.setY();
	d1.getU();
	d1.setU();
	d1.setZ();
	d1.getZ();
	
	return 0;
}
