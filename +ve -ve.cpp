#include <iostream>
using namespace std;

int main()
{
	int A;
	cout<<"Enter number: ";
	cin>>A;
	A>=0?cout<<"Number is positive. "<<endl<<endl:cout<<"Number is negative. "<<endl<<endl;
	
	int B,C;
	cout<<"Enter the two numbers: ";
	cin>>B>>C;
	B>=C?cout<<B<<" is the bigger number.": cout<<endl<<C<< " is the bigger number."<<endl;
	return 0;
}
