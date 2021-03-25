#include<iostream>
using namespace std;
struct person
{
	char name[50];
	int age;
	float salary;
	void input()                                   //here input is a member function
	{
		cout<<"Enter the details of person:"<<"\n";
		cin.get(name,50);                           //for printing a sting here used a function that is cin.get()
		cin>>age>>salary;
	}
	void display()                                   //here display function is also a member function of person structure  
	{
		
	cout<<"\n"<<"Name="<<name<<"\n"<<"Age="<<age<<"\n"<<"Salary="<<salary;
		
	}
}p1;
int main()
{
	p1.input();
	p1.display();
	
	
}


