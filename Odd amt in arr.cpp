#include <iostream>
using namespace std;

int main()
{
	int num, arr[50], amt[50], arr2[50];
	char name[50];
	cout<<"Odd amount of frequency in array\n\nEnter name: ";
	gets(name);
	cout<<"How many elements in array: ";
	cin>>num;
	for (int i=0; i<num; ++i)
	amt[i]=1;
	for (int i=0; i<num; ++i)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}
	for (int i=0, /*k=0*/; i<num; ++i)
	{
		for (int j=0; j<num; ++j)
		{
			if (arr[i]==arr[j] && i!=j)
			{
				++amt[i];
			//	arr2[k]=arr[i];
			}
		}
	}
	/*
	for (int i=0, j=0; i<num; ++i)
	{
		for (int j=0; j<num; ++j)
		{
			if (arr[i]==)
		}
	}
	*/
	cout<<"Number(s) odd amount of times: ";
	for (int i=0; i<num; ++i)
	{
		if (amt[i]%2==1)
		{
			for (int j=i; j>=0; ++j)
			{
				if (arr[i])
				{
					cout<<arr[i]<<"  ";
				}
			}
		}
	}
	return 0;
}
