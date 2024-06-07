#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int amt[50];
	char name[50], text[50];
	cout<<"Odd amount of letter\n\nEnter your name: ";
	gets(name);
	cout<<"Enter text: ";
	gets(text);
	for (int i=0; i<strlen(text); ++i)
	{
		amt[i]=1;
		for (int j=0; j<strlen(text); ++j)
		{
			if (tolower(text[i])==tolower(text[j]) && i!=j && isalpha(text[i]))
			++amt[i];
		}
	}
	cout<<"Hello, "<<name<<"\nLetter(s) that occur odd number of times: ";
	for (int i=0; i<strlen(text); ++i)
	{
		if (amt[i]%2==1)
		{
			cout<<text[i]<<" ";
		//	for (int j=0; j<amt[i]-1; ++j)
		//	{
		//		cout<<"\b";
		//	}
		}
	}
	return 0;
}
