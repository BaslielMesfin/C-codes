#include <iostream>
using namespace std;

int main()
{
	int A;
	cout<<"Even or Odd?"<<endl;
	cout<<"Enter a number to check whether if it is even or odd."<<endl;
	cin>>A;
	(A/2)*2==A?cout<<"The number is EVEN!!!":cout<<"The number is ODD!!!";
	return 0;
}
