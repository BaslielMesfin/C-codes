#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter number: ";
	cin>>a;
	b=a;
	for(int i=1; i<=a; i++)
	{
		for (int k=b-1; k>=1; k--)
		{
			cout<<" ";
		}
	
		for (int j=1; j<=i; j++)
		{	
			cout<<"$ ";
		}
		cout<<" "<<endl;
		b--;
	}
	return 0;
}
