#include<iostream>
using namespace std;
main()
{
    char choice;
    int a,b;
    cout<<"enter the choice (+,-,*,/)";
    cin>>choice;
    cout<<"inter the number";
    cin>>a>>b;

    switch (choice)
    {
        case '+':
        cout<<"sum ="<<a+b;
        break;
        
        case '-':
        cout<<"sub ="<<a-b;
        break;

        case '*':
        cout<<"mul ="<<a*b;
        break;

        case '/':
        cout<<"div ="<<a/b;
        break;

        default:
        cout<<"invalid choice";
    }
    
}