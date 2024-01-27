#include <iostream>
using namespace std;

int main()
{
	int a;
	float semester[1000], mark[1000], grade[1000], gpa[1000], cgpa;
	cout<<"GPA and CGPA Calculator \n\n";
	cout<<"Enter the number of semesters you took: ";
	cin>>a;
	for (int i=0; i<a; ++i)
	{
		cout<<" Enter the number of courses you took for semester "<<i+1<<": ";
		cin>>semester[i];
		for (int j=0, k=0; j<semester[i]; ++j, ++k)
		{
			cout<<"\tEnter the mark for course "<<j+1<<", semester "<<i+1<<": ";
			cin>>mark[j];
			if (mark [j]>=85 && mark[j]<=100) 
				grade[k]=4;
			else if (mark [j]>=80) 
				grade[k]=3.75;
			else if (mark [j]>=75) 
				grade[k]=3.5;
			else if  (mark [j]>=70) 
				grade[k]=3;
			else if (mark [j]>=65) 
			grade[k]=2.75;
			else if (mark [j]>=60) 
				grade[k]=2.5;
			else if  (mark [j]>=50)
				grade[k]=2;
			else if (mark [j]>=45)
				grade[k]=1.75;
			else if (mark [j]>=40)
				grade[k]=1;
			else 
				grade[k]=0;
		}
		for (int k=0; k<semester[i]; ++k)
		{
			gpa[i] += grade[k];
		}
		cout<<"GPA (Semester "<<i+1<<"): "<<(gpa[i]*3)/(semester[i]*3)<<endl;

		cgpa += (gpa[i]*3)/(semester[i]*3)/a;
	}
	cout<<"CGPA: "<<cgpa;
	return 0;
}
