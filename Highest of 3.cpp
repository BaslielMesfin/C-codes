#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers to get the highest of the three."<<endl;
	cin>>a>>b>>c;
	if(a>=b)
	{
		if (a>=c)
		{
			cout<<a<<" is the highest number.";
		}
		else
		{
			cout<<c<<" is the highest number.";
		}
	}
	else
	{
		if (b>=c)
		{
			cout<<b<<" is the highest number.";
		}
		else 
		{
			cout<<c<<" is the highest number.";
		}
	}
	return 0;
}
