#include <iostream>
using namespace std;

int main()
{
	int x[101];
	for (int i=0; i<101; ++i)
	x[i]=0;
	for (int i=1; i<=100; ++i)
	{
		for (int j=1; j<=i; ++j)
		{
			if (i%j==0)
			++x[i];
		}
	}
	cout<<"Prime numbers between 1 & 100: ";
	for (int i=1; i<=100; ++i)
	{
		if (x[i]==2)
		cout<<i<<" ";
	}
	return 0;
}
