#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the base number then the power number: ";
	cin>>a>>b;
	c = pow(a,b);
	cout<<a<<" to the power of "<<b<<" is "<<c<<endl;
	return 0;
}
