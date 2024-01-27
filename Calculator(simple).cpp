#include <iostream>
using namespace std;

int main()
{
	double a,b,c;
	string o;
	cout<<"SIMPLE CALCULATOR"<<"\n\nEnter a number an operator and another number to get its solution."<<"\n\nEnter: ";
	cin>>a>>o>>b;
	if (o=="+")
	{
		c=a+b;
	}
	else if (o=="-")
	{
		c=a-b;
	}
	else if (o=="*")
	{
		c=a*b;
	}
	else if (o=="/")
	{
		c=a/b;
	}
	else 
	{
		cout<<"Enter an operator between two numbers to get it's solution.";
	}
	cout<<"\n"<<a<<" "<<o<<" "<<b<<" = "<<c;
	return 0;
}
