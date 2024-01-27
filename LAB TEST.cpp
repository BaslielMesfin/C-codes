#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	//int
	string name, text; 
	cout<<"Enter your name: ";
	getline(cin, name);
	cin.ignore();
	cout<<"Enter your text: ";
	getline(cin, text);
	cin.ignore();
	cout<<text.length();
	return 0;
}
