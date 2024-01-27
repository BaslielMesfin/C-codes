#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	start:
	int letter=0;
	char a[1000], b;
	cout<<"Enter a word and know the amount of letters it contains: ";
	gets(a);
	for (int i=0; i<strlen(a); ++i)
	{
		if (isalpha(a[i]))
		++letter;
	}
	cout<<letter<<" number of letters."<<endl;
	cout<<"Would you like to go again? (Y/N) ";
	cin>>b;
	cin.ignore();
	if (b=='Y' || b=='y')
	goto start;
	return 0;
}
