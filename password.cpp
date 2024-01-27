#include <iostream>
using namespace std;

int main()
{
	string a,b;
	cout<<"Login\n\nEmail: ";
	cin>> a;
	if (a=="baslielmesfin@gmail.com" || a=="cr7@gmail.com")
	{
		cout<<"\nPassword: ";
		cin>>b;	 
 		if ((a=="baslielmesfin@gmail.com" && b=="basliel1996") || (a=="cr7@gmail.com" && b=="sui"))
		{
			cout<<"\nYou have logged in succesfully.";
		}
		else
		{
			cout<<"\nInvalid password";
		}
	}
	else
	{
		cout<<"\nEnter a valid email."<<endl;
	}
	return 0;
}
