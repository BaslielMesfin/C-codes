#include <iostream>
using namespace std;

int main()
{
	int arr[3][50], num[3], commonnum[50];
	char name[50];
	cout<<"Common numbers in a list of three arrays. \n\nWhat is your name: ";
	gets(name);
	for(int i=0; i<50; ++i)
	commonnum[i]=0;
	for (int i=0; i<3; ++i)
	{
		cout<<"How many elements do you want in array "<<i+1<<": ";
		cin>>num[i];
		for (int j=0; j<num[i]; ++j)
		{
			cout<<"Enter number "<<j+1<<": ";
			cin>>arr[i][j];
		}
	}
	for (int i=0; i<num[0]; ++i)
	{
		for (int j=0; j<num[1]; ++j)
		{
			for (int k=0; k<num[2]; ++k)
			{
				if (arr[0][i]==arr[1][j] && arr[1][j]==arr[2][k])
				commonnum[i]=1;
			}
		}
	}
	cout<<"Hey "<<name<<", the common number(s) are: ";
	for (int i=0; i<num[0]; ++i)
	{
		if (commonnum[i]==1)
		{
			cout<<arr[0][i]<<"  ";
		}
	}
	return 0;
}
