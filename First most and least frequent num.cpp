#include <iostream>
using namespace std;

int main()
{
	int arr[30], num, amt[30]={1}, largest, smallest, position1=0, position2=0;
	char name[100];
	cout<<"Enter your name: ";
	gets(name);
	cin.ignore();
	cout<<"How many elements do you want in your array: ";
	cin>>num;
	for (int i=0; i<num; ++i)
	amt[i]=1;
	for (int i=0; i<num; ++i)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}
	for (int i=0; i<num; ++i)
	{
		for (int j=0; j<num; ++j)
		{
			if (arr[i]==arr[j] && i!=j)
			{
				++amt[i];
			}
		}
	}
	largest=amt[0];
	smallest=amt[0];
	for (int i=0; i<num; ++i)
	{
		if (largest<amt[i])
		{
			largest=amt[i];
			position1=i;
		}
		if (smallest>amt[i])
		{
			smallest=amt[i];
			position2=i;
		}		
	}
	cout<<"Hi "<<name<<", \nThe first most frequent number is: "<<arr[position1]<<"\nThe first least frequent number is: "<<arr[position2]<<endl;
	return 0;
}
