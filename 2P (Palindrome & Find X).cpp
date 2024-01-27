#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    start:
    int a, error=0, c;
    char word[50], rev[50], b;
    string num[50], num2;
    cout<<"What would you like to do?\n 1. Check if a word is a palindrome or not.\n 2. Find x in a list of integers."<<endl;
    cin>>a;
    switch (a)
    {
        case 1:
        cout<<"Palindrome checker\n Enter the word: ";
        cin>>word;
        strlwr(word);
        for (int i=0; i<strlen(word), word[i]!=word[(strlen(word)-i)-1]; ++i)
            error++;
        if (error == 0)
            cout<<"Palindrome."<<endl;
        else
            cout<<"Not palindrome."<<endl;
        cout<<"Would you like to go again? (Y/N) ";
        cin>>b;
        if (b=='Y' || b=='y')
            goto start;
        break;
        case 2:
        cout<<"How many elements would you like to have? ";
        cin>>c;
        for (int i=0; i<c; ++i)
        {
            cout<<"Enter number "<<i+1<<": ";
            cin>>num[i];
        }
        cout<<"Enter the number you want to search for: ";
        cin>>num2;
        for (int i=0; i<c; ++i)
        {
            if (num2==num[i])
            {
                cout<<num2<<" is found in the number "<<i+1<<endl;
            }

        }
        cout<<"Would you like to go again? (Y/N) ";
        cin>>b;
        if (b=='Y' || b=='y')
            goto start;
        break;
    }
    return 0;
}
