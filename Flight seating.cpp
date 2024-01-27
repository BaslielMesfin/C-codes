#include <iostream>
using namespace std;

int main()
{
	int type, passnum[100], seat[100]={0}, seatno[100], n[100]={0}, occf=0, occe=0, type2;
	string name[100],sex[100];
	for (int i=0; i<100; ++i)
    {
    	end:
    	cout<<"Please type 1 for First class\nPlease type 2 for Economy class"<<endl;
        cin>>type;
    	switch (type)
    	{
    		case 1:
    		first:
    		if (occf<3)
    		{
    	    cout<<"Enter name: ";
       		cin>>name[i];
       		cout<<"Enter sex: ";
       		cin>>sex[i];
       		cout<<"Enter passport number: ";
       		cin>>passnum[i];
    			for (int j=0; j<30; ++j)
    		{
    			if (seat[j]==0)
    			{
    				seatno[j]=j+1;
    				seat[j]=1;
    				n[i]=j;
    				++occf;
    				break;
				}
			}
			}
			else 
			{
				cout<<"First class is full.\n Press 1 to get economy class seats\n Press 2 to wait for the next flight which is in 3 hours.";
				cin>>type2;
				switch (type2)
				{
					case 1:
					goto eco;	
					break;
					case 2:
					++i;
					goto end;
					break;
				}
			}
    			break;
    		case 2:
    		eco:
    		if (occe<70)
    		{
        	cout<<"Enter name: ";
        	cin>>name[i];
       		cout<<"Enter sex: ";
        	cin>>sex[i];
      		cout<<"Enter passport number: ";
      		cin>>passnum[i];
    		for (int k=30; k<100; ++k)
    		{
    			if (seat[k]==0)
    			{
    				seatno[k]=k+1;
    				seat[k]=1;
    				n[i]=k;
    				++occe;
    				break;
				}
			}
			}
			else 
			{
				cout<<"Economy class is full.\n Press 1 to get first class seats\n Press 2 to wait for the next flight which is in 3 hours.";
				cin>>type2;
				switch (type2)
				{
					case 1:
					goto first;	
					break;
					case 2:
					++i;
					goto end;
					break;
				}
			}
    			break;
		}
        cout<<"Boarding Pass \n Name: "<<name[i]<<"\n Sex: "<<sex[i]<<"\n Passport Number: "<<passnum[i]<<"\n Seat: "<<seatno[n[i]]<<endl;
	}
	cout<<"\tName\t\tSex\t\tPass no\t\tSeat number"<<endl;
	for  (int i=0; i<100; ++i)
	{
		cout<<i+1<<".\t"<<name[i]<<"\t\t"<<sex[i]<<"\t\t"<<passnum[i]<<"\t\t"<<seatno[n[i]]<<endl;
	}
	return 0;
}
