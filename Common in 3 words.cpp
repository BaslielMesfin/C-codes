#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int commonletter[50];
	char name[50], word[3][50];
	cout<<"Common letter in three words\n\nEnter your name: ";
	gets(name);
	for(int i=0; i<50; ++i)
	commonletter[i]=0;
	for (int i=0; i<3; ++i)
	{
		cout<<"Enter word "<<i+1<<": ";
		gets(word[i]);
	}
	for (int i=0; i<strlen(word[0]); ++i)
	{
		for (int j=0; j<strlen(word[1]); ++j)
		{
			for (int k=0; k<strlen(word[2]); ++k)
			{
				if (tolower(word[0][i]) == tolower(word[1][j]) && tolower(word[0][i]) == tolower(word[2][k]))
				{
					commonletter[i]=1;
				}
			}
		}
	}
	cout<<"Common letter(s): ";
	for (int i=0; i<strlen(word[0]); ++i)
	{
		if (commonletter[i]==1)
		cout<<word[0][i]<<"  ";
	}
	return 0;
}
