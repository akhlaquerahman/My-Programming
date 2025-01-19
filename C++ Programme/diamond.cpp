#include<iostream>
using namespace std;
main()
{
    int i,j,k; //row,colum
    cout<<"enter the num of row"<<endl;
    cin>>k;

    for(i=1; i<=k; i++)
    {
        for(j=1; j<=k-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
             cout<<"* ";
        }
        cout<<endl;
    }

     for(i=k; i>=1; i--)
    {
        for(j=1; j<=k-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
             cout<<"* ";
        }
        cout<<endl;
    }
}