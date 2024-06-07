/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("test file.txt", ios::out);
	if (file.is_open())
		cout<<"File opened properlly"<<endl;
	else
		cout<<"File not opened properlly"<<endl;
	file<<"Hello, my name is Basliel\n\nGoodbye!"<<endl;
	file<<"Hola"<<endl;
	//file.write("I am an AASTU student.", 23);
	file.close();
	// or file.clear();
	// file.seekp(24, ios::end); to set the put pointer
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char str[100];
	ofstream myfile;
	myfile.open("testfile.txt", ios::out);
	// or open like this
	// ofstream myfile("testfile.txt, ios::out);
	if (myfile.is_open())
		cout<<"File opened."<<endl;
	else
		cout<<"File not opened."<<endl;
	cin.getline(str,100,'\n');
	myfile<<str;
	cout<<"Tell p: "<<myfile.tellp();
	myfile.seekp(10, ios::beg);
	cin.getline(str,100,'\n');
	myfile<<str;
	myfile.close();
	return 0;
}
*/

#include <iostream> 
#include <fstream> 
using namespace std;

struct Student
{
	int roll;
	char name[25];
	float marks;
} stud;

void getdata()
{
	cout<<"\n\nEnter Roll : ";
	cin>>stud.roll;
	cout<<"\nEnter Name : ";
	cin>>stud.name;
	cout<<"\nEnter Marks : ";
	cin>>stud.marks;
}

void AddRecord()
{
	fstream outf;
	outf.open("Student.dat",ios::app|ios::binary);
	getdata();
	outf.write( (char *) &stud, sizeof(stud));
	outf.close();
}

int main()
{
	char ch='n';
	do{
		AddRecord();
		cout<<"\nwant to add more (y/n) : ";
		cin>>ch;
	} while(ch=='y' || ch=='Y');
	cout<<"\nData written successfully...";
}
