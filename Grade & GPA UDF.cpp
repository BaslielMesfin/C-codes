#include <iostream>
using namespace std;

float *grade(int course)
{
	float mark[100], *markp;
	string name;
	cout<<"What is your name? ";
	cin>>name;
	namep=&name;
	cout<<"Hi "<<name<<", how many courses do you take? ";
	cin>>course;
	for (int i=0; i<course; ++i)
	{
		cout<<"Enter the mark for course "<<i+1<<": ";
		cin>>mark[i];
	}
	markp=&mark[0];
	return markp;
}

//float GPA()

int main()
{
	string name;
	int nocourse;
	float *mark2;
	char grades, choice;
	mark2=grade(nocouse);
	cout<<"Mark\tGrade"<<endl;
	for (int i=0; i< ; ++i)
	{
		if (*mark2>)
		grade=
		cout<<*mark2<<"\t"<<grade<<endl;
		mark2+=1;
	}
//	cout<<"Would you like to go again? (Y/N) ";
//	cin>>choice;
	return 0;
}
