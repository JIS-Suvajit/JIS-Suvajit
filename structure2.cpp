#include<iostream>
using namespace std;
struct student
{
	int age;
	int roll_id;
	int ph_no;
	float exam_fees;
	
}s1;
student input();                 //function prototype
void display(student b);
int main()
{
	student s2;
	s2=input();                  //creating input user defined function for input data from users
	display(s2);	
}                                 
student input()
{     
    student b;
	cout<<"Enter details of student:";
	cin>>b.age>>b.roll_id>>b.ph_no>>b.exam_fees;
	return(b);
	
	
}                                          //for showing output,created user defined function display function
void display(student b)
{
	cout<<"\n"<<"Age="<<b.age<<"\n"<<"Roll_id="<<b.roll_id<<"\n"<<"Ph_no="<<b.ph_no<<"\n"<<"Exam_fees="<<b.exam_fees;
	
}
	

