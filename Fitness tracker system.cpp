#include <iostream>
#include <string.h>
//#include <algorithm>
using namespace std;

int main()
{
	start: 
	char a, name[100][50], search;
	int num_runner;
	float mile[100][100], totalmiles[100]={0}, avg[100]={0};
	cout<<"Training Fitness Tracking System\n Number of runnners: ";
	cin>>num_runner;
	cout<<"Enter name: "<<endl;
	for (int i=0; i<num_runner; ++i)
	{
		cout<<" Runner "<<i+1<<": ";
		cin>>name[i];
	strlwr(name[i]);
	}
	cout<<endl;
	for (int i=0; i<num_runner; ++i)
	{
		cout<<" "<<name[i]<<endl;
		for (int j=0; j<7; ++j)
		{
			cout<<"\tMiles in Day "<<j+1<<": ";
			cin>>mile[i][j];
		}
	}
	for (int i=0; i<7; ++i)
	{
		for (int j=0; j<num_runner; ++j)
		{
			avg[i]+=mile[j][i];
		}
		avg[i]=avg[i]/num_runner;
	}
	cout<<"\nName\t";
	for (int j=0; j<7; ++j)
	{
		cout<<"\tDay "<<j+1;
		if (j==6)
		cout<<"\tTotal miles"<<endl;
	}
	for (int i=0; i<num_runner; ++i)
	{
		cout<<name[i]<<"\t";
		for (int j=0; j<7; ++j)
		{
			cout<<"\t"<<mile[i][j];
			totalmiles[i]+=mile[i][j];
			if (j==6)
			cout<<"\t"<<totalmiles[i]<<endl;
		}
	}
	cout<<"Average miles";
	for (int i=0; i<7; ++i)
	{
		cout<<"\t"<<avg[i];
	}
	cout<<"\n\nSearch: ";
	cin>>search;
	//transform (search.begin(), search.end(), search.begin(), ::tolower);
	//string strlwr(search);
	for (int i=0; i<num_runner; ++i)
	{
		//transform (name[i].begin(), name[i].end(), name[i].begin(), ::tolower);
		if (search==name[i])
		{
			cout<<"\nName\t\t";
			for (int j=0; j<7; ++j)
			{
				cout<<"Day "<<j+1<<"\t";
				if (j==6)
				cout<<"Total miles"<<endl;
			}
			cout<<name[i]<<"\t\t";
			for (int j=0; j<7; ++j)
			{
				cout<<mile[i][j]<<"\t";
				if (j==6)
				cout<<totalmiles[i];
			}
			break;
		}
		if (i==num_runner-1 && search!=name[i])
		cout<<"Not found!"<<endl;
	}	
	cout<<"\n\nWould you like to go again? (Y/N) ";	
	cin>>a;	
	if (a=='y' || a=='Y')	
	goto start;	
	else	
	return 0;
}
