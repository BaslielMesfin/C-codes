#include <iostream>
using namespace std;

int main()
{
	long double a;
	int b;
	cout<<"Enter a number to get it's Fibonacci series: ";
	cin>>a;
	if (a>0)
	{
		for (a=a; a>0; a*=1.618, b=a, cout<<b<<" "<<endl)
		{
			/*if ((a*10)%5>=0)
			{
				  
			}
			else
			{
				
			}
			b=a;
			cout<<b<<" ";*/
		}
	}
	else 
	{
		cout<<"Enter a positive number, otherwise this won't work.";
	}
	return 0;
}
