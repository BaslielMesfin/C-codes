#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[50], text[50];
	cout<<"Remove non alphabet charcter\n\nEnter your name: ";
	gets(name);
	cout<<"Enter text: ";
	gets(text);
	cout<<"Hi "<<name<<", the alphabet characters are ";
	for (int i=0; i<strlen(text); ++i)
	{
		if (isalpha(text[i]) || text[i]==' ')
		cout<<text[i];
	}
	return 0;
}
