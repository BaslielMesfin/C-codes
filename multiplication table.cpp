#include <iostream>
using namespace std;

int main()
{
	int a,  p=1;
	cout<<"Enter a number to get it's multiplication upto 10."<<endl;
	cin>>a;
	for (int i=1; i<=10; ++i)
	{
		p = a * i;
		cout<<a<<" X "<<i<<"  = "<<p<<endl;
	}	
	return 0;
}
/*
	int A,b,c,d,e,f,g,h,i,j,k;
	cout<<"Enter a number to get it's multiplication upto 10."<<endl;
	cin>>A;
	b=A*1;
	c=A*2;	
	d=A*3;
	e=A*4;
	f=A*5;
	g=A*6;
	h=A*7;
	i=A*8;
	j=A*9;
	k=A*10;
	cout<<A<<" X 1  = "<<b<<endl;
	cout<<A<<" X 2  = "<<c<<endl;
	cout<<A<<" X 3  = "<<d<<endl;
	cout<<A<<" X 4  = "<<e<<endl;
	cout<<A<<" X 5  = "<<f<<endl;
	cout<<A<<" X 6  = "<<g<<endl;
	cout<<A<<" X 7  = "<<h<<endl;
	cout<<A<<" X 8  = "<<i<<endl;
	cout<<A<<" X 9  = "<<j<<endl;
	cout<<A<<" X 10 = "<<k<<endl;
*/
