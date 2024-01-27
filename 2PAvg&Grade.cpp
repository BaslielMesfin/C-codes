#include <iostream>
using namespace std;

int main()
{
	double avg, math, eng, phy, bio, chem;
	char a, grade;
	cout<<"Average and Grade\n\n 1. Display the average of your five subjects.\n\n 2. Display the grade of every subject.\n\nEnter the number of the program you want to use: ";
	cin>>a;
	switch (a)
	{
	case '1': 
	 cout<<"\nAverage\n\nEnglish: ";
	 cin>>eng;
	 cout<<"Mathematics: ";
	 cin>>math;
	 cout<<"Physics: ";
	 cin>>phy;
	 cout<<"Biology: ";
	 cin>>bio;
	 cout<<"Chemistry: ";
	 cin>>chem;
	 avg = (eng + math + phy + bio + chem)/5;
	 cout<<"Average = "<<avg;
	break;
	case '2':
		cout<<"\nGrade\n\nEnglish: ";
		cin>>eng;
		cout<<"Mathematics: ";
		cin>>math;
		cout<<"Physics: ";
		cin>>phy;
		cout<<"Biology: ";
		cin>>bio;
		cout<<"Chemistry: ";
		cin>>chem;
		avg = (eng + math + phy + bio + chem)/5;
		if (avg >=0 && avg<=100)
		{
			if (avg>=90)
			{
				grade='A';
				cout<<"Grade: "<<grade;
			}
			else if (avg>=75)
			{
				grade='B';
				cout<<"Grade: "<<grade;
			}
			else if (avg>=50)
			{
				grade='C';
				cout<<"Grade: "<<grade;
			}
			else
			{
				grade='F';
				cout<<"Grade: "<<grade;
			}
		}
		else 
		{
			cout<<"Enter a valid score out of 100.";
		}
	break;
	}
	return 0;
}
