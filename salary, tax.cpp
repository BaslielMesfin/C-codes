#include <iostream>
using namespace std;

struct employee_data
{
	int eid;
	string name;
	float gsalary, tax, netsalary;
};

void nsaldisplay(float netsal)
{
	cout<<netsal;
}

void nsalary(float t, float gsal)
{
	float nsal;
	nsal= gsal - t;
	nsaldisplay(nsal);
}

int main()
{
	int empnum, searchid;
	char choice;
	employee_data e[100];
	cout<<"Employee Salary Calculator\n\nHow many employees: ";
	cin>>empnum;
	for (int i=0; i<empnum; ++i)
	{
		cout<<"Enter name for employee "<<i+1<<": ";
		cin>>e[i].name;
		cout<<"Enter ID for employee "<<i+1<<": ";
		cin>>e[i].eid;
		cout<<"Enter gross salary for employee "<<i+1<<": ";
		cin>>e[i].gsalary;
		if (e[i].gsalary>=10000)
			e[i].tax = e[i].gsalary * 0.35;
		else if (e[i].gsalary>=5000)
			e[i].tax = e[i].gsalary * 0.2;
		else if (e[i].gsalary>=3000)
			e[i].tax = e[i].gsalary * 0.1;
		else
			e[i].tax = 0;
//	go to the nsalary user defined function		
//	e[i].netsalary = e[i].gsalary - e[i].tax;
	}
	cout<<"Employee Name\tEmployee ID\tNet salary"<<endl;
	for (int i=0; i<empnum; ++i)
	{
		cout<<e[i].name<<"\t\t"<<e[i].eid<<"\t\t";
		nsalary(e[i].tax, e[i].gsalary);
		cout<<endl;
	}
	cout<<"Press y to search or other to continue: ";
	cin>>choice;
	if (choice=='y' || choice=='Y')
	{
		cout<<"Enter the employee ID: ";
		cin>>searchid;
		for (int i=0; i<empnum; ++i)
		{
			if (searchid==e[i].eid)
			{
				cout<<"Employee Name\tEmployee ID\tNet salary\n"<<e[i].name<<"\t\t"<<e[i].eid<<"\t\t";
				nsalary(e[i].tax, e[i].gsalary);
			}
			if (i==empnum-1 && searchid!=e[i].eid)
				cout<<"Employee not found."<<endl;
		}
	}
	return 0;
}
