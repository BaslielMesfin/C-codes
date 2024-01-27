#include <iostream>
using namespace std;

int main()
{
    char a;
    int b,c;
    float d,e,f;
    cout<<"You have three options. Enter the number of the program you want to use. \n\n 1. Positive | Negative | Zero \n\n 2. Even or Odd \n\n 3. Highest of 3 number"<<endl;
    cin>>a;
    switch (a)
    {
    case '1':

        cout<<"Positive or Negative \n\nEnter a number to see whether it is positive or not. \n\n Enter number: ";
        cin>>b;
        if (b>0)
        {
            cout<<b<<" is a Positive number.";
        }
        else if (b<0)
        {
            cout<<b<<" is a Negative number.";
        }
        else if(b==0)
        {
            cout<<b<<" is 0.";
        }
        else
        {
            cout<<"Enter a valid number";
        }
        break;

    case '2':
        cout<<"Even or Odd \n\nEnter a number to see whether it is even or odd.\n\nEnter number: ";
        cin>>c;
        if (c%2==0)
        {
            cout<<c<<" is Even";
        }
        else
        {
            cout<<c<<" is Odd";
        }
        break;
    case '3':
        cout<<"Highest of 3 \n\nEnter three numbers to get the highest one.\n\nEnter numbers: ";
        cin>>d>>e>>f;
        if (d>=e)
        {
            if (d>=f)
            {
                cout<<d<<" is the highest number.";
            }
            else
            {
                cout<<f<<" is the highest number.";
            }
        }
        else
        {
            if (e>=f)
            {
                cout<<e<<" is the highest number.";
            }
            else
            {
                cout<<f<<" is the highest number.";
            }
        }
        break;
    }
    return 0;
}
