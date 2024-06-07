#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int amt[50], largest, smallest, freq, nonfreq;
	char name[50], text[50];
	cout<<"First frequent and non frequent charcter\n\nEnter your name: ";
	gets(name);
	for (int i=0; i<50; ++i)
	amt[i]=1;
	cout<<"Enter the text: ";
	gets(text);
	for (int i=0; i<strlen(text); ++i)
	{
		for (int j=0; j<strlen(text); ++j)
		{
			if (tolower(text[i])==tolower(text[j]) && i!=j && isalpha(text[i]))
			++amt[i];
		}
	}
	largest=amt[0];
	smallest=amt[0];
	for (int i=0; i<strlen(text); ++i)
	{
		if (largest<amt[i])
		{
			largest=amt[i];
			freq=i;
		}
		if (smallest>amt[i] && isalpha(text[i]))
		{
			smallest=amt[i];
			nonfreq=i;
		}
	}
	cout<<"Hi "<<name<<"\n The first frequent character is "<<tolower(text[freq])<<"\n The first non frequent character is "<<tolower(text[nonfreq])<<endl;
	return 0;
}
