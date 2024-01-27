#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main()
{
	double price[50];
	int quantity[50], choice, sales[50], choice2, productnum, choice3, num, incorrect=0, totalsales=0;
	char name[50][50], productname[50];
	cout<<"Inventory Tracking System"<<endl;
	for (int i=0; i<50; ++i)
	{
		num=i;
		cout<<"Product "<<i+1<<"\n Name: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.getline(name[i], 50, '\n');
		cout<<" Price: ";
		cin>>price[i];
		cout<<" Quantity: ";
		cin>>quantity[i];
		cout<<" Units sold: ";
		cin>>sales[i];
		choose:
		cout<<"\n1. Enter another product\n2. See available products\n3. Update quantity of product\n4. Sales report"<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1:  
				break;
			case 2:
				cout<<"\t\tName\tPrice\tQuantity\tUnits sold"<<endl;
				for (int j=0; j<=i; ++j)
				{
					cout<<"Product "<<j+1<<"\t"<<name[j]<<"\t"<<price[j]<<"\t"<<quantity[j]<<"\t\t"<<sales[j]<<endl;
				}
				goto choose;
				break;
			case 3:
					search: 
					cout<<"Search the product by\n 1. Name or\n 2. Product number"<<endl;
					cin>>choice2;
					switch (choice2)
					{
						case 1:
							cout<<"Enter name of product: ";
							cin.get(productname[50]);
							cin.ignore();
							for (int j=0; j<=i; ++j)
							{
								for (int k=0; k<50; ++k)
								{
									if (tolower(productname[k])!=tolower(name[j][k]))
									{
										++incorrect;
										break;
									}
								}
								if (incorrect==0)
								{
									cout<<"Product is found!\n Enter the new quantity for product "<<j+1<<" or \'"<<productname<<"\': "<<endl;
									cin>>quantity[j];
									cout<<"Update successful!"<<endl;
									break;
								}
								if (j==i)
								{
									cout<<"No product found with the name of "<<productname<<". Press 1 to search again ";
									cin>>choice3;
									if (choice3==1)
									goto search;
								}
								incorrect=0;
							}
							break;
						case 2:
							cout<<"Enter product number: ";
							cin>>productnum;
							for (int j=0; j<=i; ++j)
							{
								if (productnum-1==j)
								{
									cout<<"Product is found!\n Enter the new quantity for product "<<j+1<<": "<<endl;
									cin>>quantity[j];
									cout<<"Update successful!"<<endl;
									break;
								}								
								if (j==i)
								{
									cout<<"Product "<<productnum<<" not found.\n Press 1 to search again ";
									cin>>choice3;
									if (choice3==1)
									goto search;
								}
							}
							break;
					}
				goto choose;
				break;
			case 4:
				cout<<"Sales Report\n\t\tSales"<<endl;
				for (int l=0; l<=i; ++l)
				{
					cout<<"Product "<<l+1<<"\t"<<sales[l]<<endl;
					totalsales+=sales[l];
					if (l==i)
					cout<<"Total sales\t"<<totalsales<<endl;
				}
				goto choose;
		}
	}
	return 0;
}
