#include <iostream>
using namespace std;

void gcf(int a, int b)
{
	int factor=1;
	for (int i=1; i<=a; ++i)
	{
		if (a%i==0 && b%i==0)
		factor=i;
	}
	cout<<"GCF = "<<factor<<endl;
}

void lcm (int a, int b)
{
	
}
int main()
{
	int num1, num2;
	cout<<"LCM\n\nEnter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	gcf(num1, num2);
	return 0;
}
