#include<iostream>
using namespace std ;

class Mother
{
	public :
	void Display()
	{
		cout<<"Mother name =aarti"<<endl;
		cout<<"Age =30"<<endl;
	}
};

class daughter : public Mother
{
	public :
	void display()
	{
		cout<<"Daughter name =divya"<<endl;
		cout<<"Age =5"<<endl;
	}	
};
int main()
{
	daughter d1;
	d1.Display();
	d1.display();
	return 0;
}

