#include <iostream>
using namespace std;

int main() {
	int *p;
	p=new int[5];
	int i=0,n=5;
	cout<<"Enter the values\n";
	for(i=0;i<n;i++)
	{
	    
	    cin>>p[i];
	    
	    
	}
	 cout<<"the values are:"<<endl;
		for(i=0;i<n;i++)
	{
	    
	    cout<<p[i]<<endl;
	    
	    
	}

	return 0;
}
