#include  <iostream>
using namespace std;

int main()
{
	int arr[50], num, amt[50]={0}, max, n;
	cout<<"How many elements do you want? ";
	cin>>num;
	for (int i=0; i<num; ++i)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}
	for (int i=0; i<num; ++i)
	{
		for (int j=0; j<num; ++j)
		{
			if (arr[i]==arr[j])
			{
				amt[i]+=1;
			}
		}
	}
	max=amt[0];
	for (int i=0; i<num; ++i)
	{
		if (max<amt[i])
		{
			n=i;
		}
	}
	cout<<"The number with the most frequencies is "<<arr[n]<<endl;
	return 0;
}
