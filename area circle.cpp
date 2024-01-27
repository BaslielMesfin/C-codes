#include <iostream>
using namespace std;

int main()
{
	const float pi=3.1415926536;
	int r,A,P;
	cout<<"Area and Perimeter"<<'/n'<<'/n'<<"Enter the radius of a circle to get it's area and perimeter."<<'/n'<<"radius: "<<endl;
	cin>>r;
	A = pi*r*r;
	P = 2*pi*r;
	cout<<"Area = "<<A<<'/n'<<"Perimeter = "<<P;
	return 0;
}
