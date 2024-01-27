#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g=1;
	cout<<"How many times would you like to perform the task: ";
	cin>>a;
	cout<<"Enter \'1\' to find the largest of three numbers or \nEnter \'2\' to check if a number is odd or even.\n Enter number: ";
	cin>>b;
	switch (b)
	{
		case 1: 
		do{
		cout<<"\nHighest of three\n\nEnter three numbers: ";
		cin>>c>>d>>e;
		if (c>=d && c>=e)
		cout<<" "<<c<<" is the largest number."<<endl;
		else if (d>=c && d>=e)
		cout<<" "<<d<<" is the largest number."<<endl;
		else
		cout<<" "<<e<<" is the largest number."<<endl;
		g++;
		} while (g<=a);
		break;
		case 2:
		do {
		cout<<"Odd or Even\n Enter number: ";
		cin>>f;
		if (f%2==0)
		cout<<" "<<f<<" is Even."<<endl;
		else
		cout<<" "<<f<<" is Odd."<<endl;
		g++;
		} while (g<=a);
		break;
	}
	cout<<"The program has finshed executing."<<endl;
	return 0;
}
