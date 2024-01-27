#include <iostream>
using namespace std;

int main()
{
	int a, b[50], c, *ptr1[50], *ptr2;
	cout<<"How many elements do you want in your list? ";
	cin>>a;
	cout<<"Enter the numbers in an ascending order."<<endl;
	for (int i=0; i<a; ++i)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>b[i];
		ptr1[i]=&b[i];
	}
	cout<<"What's the number you want to add? ";
	cin>>c;
	ptr2=&c;
	for (int i=0; i<a; ++i)
	{
		if (*ptr2<=*ptr1[i])
		{
			for (int j=a; j>i; --j)
			{
				*ptr1[j]=*(ptr1[j-1]);
			}
			*ptr1[i]=*ptr2;
			break;
		}
		else
		*ptr1[a]=*ptr2;
	}
	cout<<"Your new list is: ";
	for (int i=0; i<=a; ++i)
	{
		cout<<*ptr1[i]<<" ";
	}
	return 0;
}
