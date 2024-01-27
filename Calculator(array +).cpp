#include <iostream>
using namespace std;

int main()
{
	int n;
	long double num[100000], sum=0;
	cout<<"Enter the amount of numbers you want to add together: \n";
	//cin>>n;
	for (int i=1; i<=90000; ++i)
	{
		cout<<"number "<<i<<": ";
		cin>>num[i];
		sum+=num[i];
		if (num[i]==0)
		break;
	}
	for(int i=1; i<100000; ++i)
	{
	if (num[i]==0)
	break;
	cout<<num[i]<<"+";
	}
	cout<<"\b = "<<sum<<endl;
	return 0;
}
