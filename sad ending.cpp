#include <iostream>
using namespace std;

int main()
{
	char A[180], B[180];
	cout<< "What's your name?"<< endl;
	cin.get(A,180);
	cin.ignore();
	cout<< "Hello "<<A<<", what do you want to be in the future?"<<endl;
	cin.get(B, 180);
	cin.ignore();
	cout<<"Well, we all know you are not going to be a "<<B<<" in the future, so just give up right now and stop existing. That would do more good to the world than curing cancer. Anyways have a good, lovely day "<<A<<" or whatever your name is."<<endl;
	return 0;
}
