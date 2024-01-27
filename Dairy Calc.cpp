#include <iostream>
using namespace std;

int main()
{
	char c;
	int a, b, nocartoons;
	float amt, cost, price, profit, discount, rate, totalcost, totalprofit;
	cout<<"Check in on your customers.\n\n";
	cout<<"Enter the cost per liter of milk: ";
	cin>>cost;
	cout<<"Enter the price per liter of milk: ";
	cin>>price;
	profit = price - cost;
	start: 
	cout<<"\nWhich Grocery do you want to see?\n\n 1. Grocery 1\n 2. Grocery 2"<<endl;
	cin>>a;
	switch (a)
	{
		case 1: 
		cout<<"Enter the amount of milk sent to Grocery 1: ";
		cin>>amt;
		if (amt>=1000)
			rate=2.5;
		else if (amt>=750 && amt<1000)
			rate=1.5;
		else if (amt>=250 && amt<750)
			rate=1;
		else
			rate=0;
		discount=(amt*price)*(rate/100);
		totalcost = cost * amt;
		totalprofit = profit * amt - discount;
		nocartoons = (amt / 3.5) + 1;
		cout<<"What would you like to see?\n 1. Discount of Grocery 1\n 2. Total cost\n 3. Total profit\n 4. Number of cartoons\n 5. All"<<endl;
		cin>>b;
		switch (b)
		{
			case 1:
			cout<<"Discount of Grocery 1: "<<discount<<" birr."<<endl;
			break;
			case 2: 
			cout<<"Total cost: "<<totalcost<<" birr."<<endl;
			break;
			case 3:
			cout<<"Total profit: "<<totalprofit<<" birr."<<endl;
			break;
			case 4:
			cout<<"Total number of cartoons: "<<nocartoons<<endl;
			break;
			case 5: 
			cout<<"Discount of Grocery 1: "<<discount<<" birr."<<endl;
			cout<<"Total cost: "<<totalcost<<" birr."<<endl;
			cout<<"Total profit: "<<totalprofit<<" birr."<<endl;
			cout<<"Total number of cartoons: "<<nocartoons<<endl;
			break;
		}
		break;
		case 2:
		cout<<"Enter the amount of milk sent to Grocery 2: ";
		cin>>amt;
		if (amt>=1000)
			rate=2.5;
		else if (amt>=750 && amt<1000)
			rate=1.5;
		else if (amt>=250 && amt<750)
			rate=1;
		else
			rate=0;
		discount=(amt*price)*(rate/100);
		totalcost = cost * amt;
		totalprofit = profit * amt - discount;
		nocartoons = (amt / 3.5) + 1;
		cout<<"What would you like to see?\n 1. Discount of Grocery 2\n 2. Total cost\n 3. Total profit\n 4. Number of cartoons\n 5. All"<<endl;
		cin>>b;
		switch (b)
		{
			case 1:
			cout<<"Discount of Grocery 2: "<<discount<<" birr."<<endl;
			break;
			case 2: 
			cout<<"Total cost: "<<totalcost<<" birr."<<endl;
			break;
			case 3:
			cout<<"Total profit: "<<totalprofit<<" birr."<<endl;
			break;
			case 4:
			cout<<"Total number of cartoons: "<<nocartoons<<endl;
			break;
			case 5: 
			cout<<"Discount of Grocery 1: "<<discount<<" birr."<<endl;
			cout<<"Total cost: "<<totalcost<<" birr."<<endl;
			cout<<"Total profit: "<<totalprofit<<" birr."<<endl;
			cout<<"Total number of cartoons: "<<nocartoons<<endl;
			break;
		}
		break;
	}
	cout<<"\nWould you like to go again? (Y/N) ";
	cin>>c;
	if (c=='Y' || c=='y')
		goto start;
	return 0;
}
