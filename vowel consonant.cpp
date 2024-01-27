#include <iostream>
using namespace std;

int main()
{
	char a;
	cout<<"Vowel or Consonant \n\nEnter a letter: ";
	cin>>a;
	if (tolower(a)>='a' && tolower(a)<='z')
	{
		if (tolower(a)=='a'||tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u')
		{
			cout<<"\n"<<a<<" is a vowel.";
		}
		else 
		{
			cout<<"\n"<<a<<" is a consonant.";	
		}	
	}
	else
	{
		cout<<"\nEnter a letter and try again.";
	}
	return 0;
}
