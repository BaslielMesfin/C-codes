#include <iostream>
using namespace std;

int main()
{
	int a,x=1;
	cout<<"Enter a number: ";
	cin>>a;
	while ((x*2)<a)
	{
		cout<<x*2<<" ";
		x++;
	}
	return 0;
}
