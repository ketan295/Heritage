#include<iostream>
#include<string.h>
using namespace std;
class A
{
	protected:
	int id;
	int contact;
	int salary;
	int experience;
	char name[100];
	char role[100];
	char comp_name[100];
	char address[100];
	char email[100];
	
	public:
		void setter()
		{
			cout<<"ENTER ID :"<<endl;
			cin>>id;
			cout<<"ENTER NAME :"<<endl;
			cin>>name;
			cout<<"ENTER ROLE :"<<endl;
			cin>>role;
		}
	
};
class B : public A
{
	public:
		void set()
		{
			cout<<"ENTER SALARY :"<<endl;
			cin>>salary;
			cout<<"ENTER EXPERIENCE IN YEAR:"<<endl;
			cin>>experience;
		}
};
class C : public B
{
	public:
	void setdata()
	{
		cout<<"ENTER COMPANY NAME  :"<<endl;
			cin>>comp_name;
			cout<<"ENTER ADDRESS :"<<endl;
			cin>>address;
	}
	void getter()
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Role ="<<role<<endl;
		cout<<"Salary ="<<salary<<endl;
	}		
};
class D : public C
{
	public:
	void Setdata()
	{
		cout<<"ENTER E-mail : "<<endl;
		cin>>email;
		cout<<"ENTER contact : "<<endl;
		cin>>contact;
	}
	void Getter()
	{
		cout<<"Id = "<<id<<endl;
		cout<<"Name = "<<name<<endl;
		cout<<"Role = "<<role<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"Experience = "<< experience<<endl;
		cout<<"Company name  = "<<comp_name<<endl;
		cout<<"Adress = "<<address<<endl;
		cout<<"Email = "<<email<<endl;
		cout<<"Contact ="<<contact<<endl;
	}			
};
	

int main()
{
	D o1;
	o1.setter();
	o1.set();
	o1.setdata();
	o1.Setdata();
	cout<<"_________________________________________"<<endl<<endl;
	o1.getter();
	o1.Getter();
	
	return 0;
}
