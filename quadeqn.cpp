#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	start: 
    float a,b,c,d,f,r1,r2,r1i; 
	char z;
    cout<<"Quadratic Equation \n\nEnter the coefficients of the quadratic equation.\n\n _x^2 _x _ = 0"<<endl;
    cin>>a>>b>>c;
    f = ((pow(b,2)) - 4 * a * c);
    d = sqrt((pow(b,2)) - 4 * a * c);
    if (f>0)
    {
        r1 = (-b + d) / (2 * a);
        r2 = (-b - d) / (2 * a);
        cout<<"\nr1 = "<<r1<<" | r2 = "<<r2<<endl;
    }
    else if (f==0)
    {
        r1 = -b / (2 * a);
        cout<<"\nr1 = "<<r1<<" | r2 = "<<r1<<endl;
    }
    else if (f<0)
    {
        r1 = -b/(2*a);
        r1i = sqrt((-1)*(pow(b,2)-(4*a*c)));
        cout<<"\nr1 = "<<r1<<" + "<<r1i<<"i | r2 = "<<r1<<" - "<<r1i<<"i"<<endl;
    }
    else
    {
        cout<<"Enter the numbers correctly."<<endl;
    }
    cout<<"Would you like to go again? (Y/N) ";
    cin>>z;
    if (z=='Y' || z=='y')
    goto start;
    return 0;
}
