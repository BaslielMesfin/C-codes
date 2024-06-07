#include <iostream>
using namespace std;

int fact(int n)
{
	if (n>1)
		return n * fact(n-1);
	else 
		return 1;
}

int main()
{
	int num;
	cout<<"Factorial calculator\n\n Enter number: ";
	cin>>num;
	cout<<" "<<num<<"! = "<<fact(num)<<endl;
	return 0;
}
