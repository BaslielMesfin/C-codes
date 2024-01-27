#include <iostream>
using namespace std;

int main()
{
    float a, b, *ptr1=&a, *ptr2=&b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<a<<" + "<<b<<" = "<<*ptr1+*ptr2<<endl;
    cout<<a<<" - "<<b<<" = "<<*ptr1-*ptr2<<endl;
    cout<<a<<" x "<<b<<" = "<<*ptr1**ptr2<<endl;
    cout<<a<<" / "<<b<<" = "<<*ptr1/(*ptr2)<<endl;
    return 0;
}

