#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
	char b[1];
	cout<<"Enter a letter: ";
	cin>>b[0];
	char strupr(b[0]);
	cout<<b[0]<<"\n\n\n";
	for (char i='A'; i<=b[0]; ++i)
	{
		for (char j='A'; j<=i; ++j)
		{
			cout<<j<<" ";
		}
		cout<<" "<<endl;
	}
	return 0;
}
