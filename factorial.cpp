#include <iostream>
using namespace std;

int main()
{
	long double a;
	cout<<"Factorial\n\nEnter a number to get it's factorial\n\n Number: ";
	cin>>a;
	if (a>=0)
	{	
		long double p=1;
		for (long double i=1; i<=a; p*=i,++i);
		cout<<a<<"! = "<<p<<endl;
	}
	else
	{
		cout<<"Enter a valid number!"<<endl;
	}
	return 0;
}
