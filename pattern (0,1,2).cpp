#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter number: ";
	cin>>b;
	a=b+1;
	if (a>0)
	{
		for (int i=a; i>1; --i)
		{
			for (int j=i, k=a; j>=1; --j,--k)
			{
				cout<<a-k;
			}
			for (int m=1; m<=a-i; ++m)
			{
				cout<<"  ";
			}
			for (int l=i; l>=1; --l)
			{
				if (l==i)
				cout<<"\b";
				cout<<-1+l;
			}
			cout<<" "<<endl;
		}
		for (int i=1; i<=a; ++i)
		{
			for (int j=1; j<=i; ++j)
			{
				cout<<j-1;
			}
			for (int k=a-1; k>=i; --k)
			{
				cout<<"  ";
			}
			for (int l=1; l<=i; ++l)
			{
				if (l==1)
				cout<<"\b";
				cout<<i-l;
			}
			cout<<" "<<endl;
		}
	}
	else
	cout<<"ERROR!"<<endl;
	return 0;
}
