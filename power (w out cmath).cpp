#include <iostream>
using namespace std;

int main()
{
	int a,b,c=1;
	cout<<"Enter the number then its power: ";
	cin>>a>>b;
	for (int i=1; i<=b; ++i)
	c*=a;
	cout<<a<<" the power of "<<b<<" = "<<c<<endl;
	return 0;
}
