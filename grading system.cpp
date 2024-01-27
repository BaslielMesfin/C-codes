#include <iostream>
using namespace std;

int main()
{
	float a;
	string b;
	cout<<"Grading system"<<"\n\nEnter your score out of 100 to get your grade."<<"\n\nScore: ";
	cin>>a;
	if (a>=0 && a<=100)
	{
		if (a>=89.5)
		{
			b="A+";
			cout<<"Grade: "<<b;
		}
		else if (a>=84.5)
		{
			b="A";
			cout<<"Grade: "<<b;
		}
		else if (a>=79.5)
		{
			b="A-";
			cout<<"Grade: "<<b;
		}
		else if (a>=74.5)
		{
			b="B+";
			cout<<"Grade: "<<b;
		}
		else if (a>= 69.5)
		{
			b="B";
			cout<<"Grade: "<<b;
		}
		else if (a>=64.5)
		{
			b="B-";
			cout<<"Grade: "<<b;
		}
		else if (a>=59.5)
		{
			b="C+";
			cout<<"Grade: "<<b;
		}
		else if (a>=54.5)
		{
			b="C";
			cout<<"Grade: "<<b;
		}
		else if (a>=49.5)
		{
			b="C-";
			cout<<"Grade: "<<b;
		}
		else if (a>=44.5)
		{
			b="D";
			cout<<"Grade: "<<b<<" You're on thin ice buddy.";
		}
		else if (a>=20)
		{
			b="F";
			cout<<"Grade: "<<b<<" You that stupid? What is the matter with you?";
		}
		else if(a>=0)
		{
			b="F";
			cout<<"Grade: "<<b<<"  You think this some kind of joke, you gonna be on the streets soon. Goodluck on getting anywhere in life.";
		}
	}
	else 
	{
		cout<<"Enter a valid score to get your grade.";
	}
	
	return 0;
}
