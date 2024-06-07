#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i=0, num, rate, choice, calorieburn[5]={150, 200, 450, 600, 750};
	char id[50][5], search[4];
	double exerciseduration[50], totalcalories[50];
	cout<<"Fitness tracking\n\nEnter number of people: ";
	cin>>num;
	selection:
	cout<<"Choose what you would like the program to perform\n 1. Insert data\n 2. Dislpay whole record\n 3. Display personal record\n 4. Search person by ID\n 5. Exit program"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1:
		cout<<"Enter ID: ";
		cin>>id[i];
		cout<<"Choose calorie burn rate\n 1. 150\n 2. 200\n 3. 450\n 4. 600\n 5. 750\n";
		cin>>rate;
		cout<<"Enter exercise duration: ";
		cin>>exerciseduration[i];
		totalcalories[i]=calorieburn[rate-1]*pow(exerciseduration[i], 2);
		++i;
		goto selection;
		case 2:
		cout<<"ID\texercise duration\ttotal calories burnt"<<endl;
		for (int j=0; j<=i-1; ++j)
		cout<<id[j]<<"\t"<<exerciseduration[j]<<"\t\t"<<totalcalories[j]<<endl;
		goto selection;
		case 3:
		cout<<"ID\texercise duration\ttotal calories burnt"<<endl;
		cout<<id[i-1]<<"\t"<<exerciseduration[i-1]<<"\t\t"<<totalcalories[i-1]<<endl;
		goto selection;
		case 4:
		cout<<"Enter ID of person you want to search for: ";
		cin>>search;
		for (int j=0; j<=i-1;  ++j)
		{
			if (search==id[j])
			{
				cout<<"ID\texercise duration\ttotal calories burnt"<<endl;
				cout<<id[j]<<"\t"<<exerciseduration[j]<<"\t\t"<<totalcalories[j]<<endl;
				break;

			}
			if (j=i-1)
			{
				cout<<"Person not found!"<<endl;
				break;
			}
		}
		goto selection;
		case 5:
		return 0;
		default:
		cout<<"Enter from 1-5"<<endl;
		goto selection;
	}
	return 0;
}
