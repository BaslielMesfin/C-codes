#include <iostream>
using namespace std;

int main()
{
	float a,b;
	char o,c;
	start: 
	cout<<"Enter a number, an operator then a number: ";
	cin>>a>>o>>b;
	switch (o)
	{
		case '+':
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		break;
		case '-':
		cout<<a<<" - "<<b<<" = "<<a-b<<endl;
		break;
		case '*':
		cout<<a<<" x "<<b<<" = "<<a*b<<endl;
		break;
		case '/':
		cout<<a<<" / "<<b<<" = "<<a/b<<endl;
		break;
	}
	cout<<"Would you like to go agian? (Y/N) ";
	cin>>c;
	if (c=='Y' || c=='y')
	goto start;
	return 0;
}
