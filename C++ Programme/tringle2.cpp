#include<iostream>
using namespace std;
main()
{
    int i,j,k;
    cout<<"enter number of row"<<endl;
    cin>>k;
    for(i=k; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
          cout<<"* ";
        }
         cout<<endl;
    }
   
}