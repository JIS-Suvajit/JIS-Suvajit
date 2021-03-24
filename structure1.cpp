#include<cstring>      /*it is a header file for using of strcpy() function */   
#include<iostream>
using namespace std;     
struct book{                
	int item;               
	char name[30];
	float price;
	
}b1;       //b1 is a variable of book data type
int main()
{
	book b2={20,"this is book",280.34};
    book b3,b4;	                          //here book is non primitive data type
	b3.item=10;                            
	strcpy(b3.name,"It is a thing");    //the function strcpy() is a standard library function
	b3.price=34.56;                          
	b4=b3;                              
	cout<<"Item="<<b2.item<<endl; 
    cout<<"Name="<<b2.name<<endl; 
    cout<<"Price="<<b2.price;
	cout<<"\n\nitem="<<b3.item<<"\nName="<<b3.name<<"\nPrice="<<b3.price<<endl;                   
	
	
}
