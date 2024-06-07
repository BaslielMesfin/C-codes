#include <iostream>
using namespace std;

int main()
{
	int num[50], amt, position[50];
	char name[50];
	for (int i=0; i<50; ++i)
	position[i]=0;
	cout<<"Arrange in descending order\n\nEnter name: ";
	gets(name);
	cout<<"How many elements in array: ";
	cin>>amt;
	for (int i=0; i<amt; ++i)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>num[i];
	}
	for (int i=0; i<amt; ++i)
	{
		for (int j=0; j<amt; ++j)
		{
			if (num[i]<num[j])
			++position[i];
		}
	}
	cout<<"Hi "<<name<<", the array in descending order is ";
	for (int i=0; i<amt; ++i)
	{
		for (int j=0; j<amt; ++j)
		{
			if (position[j]==i)
			cout<<num[j]<<" ";
		}
	}
	return 0;
}
