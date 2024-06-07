#include <iostream>
using namespace std;

int main()
{
	int num, x;
	cout<<"\nPrime or Composite"<<endl;
	start:
	x=0;
	cout<<"\nEnter number: ";
	cin>>num;
	if (num>1)
	{
		for (int i=1; i<=num; ++i)
		{
			if (num%i==0)
			++x;
		}
		if (x==2)
		{
			cout<<num<<" is prime."<<endl;
			goto start;
		}
		else
		{
			cout<<num<<" is composite."<<endl;
			goto start;	
		}
		
	}
	else if (num==0)
	{
		cout<<" 0 is neither prime nor composite."<<endl;
		goto start;
	}
	else if (num==1)
	{
		cout<<" 1 is neither prime nor composite."<<endl;
		goto start;
	}
	else
	{
		cout<<"Enter a positive number."<<endl;
		goto start;
	}
	return 0;
}
