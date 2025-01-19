#include<iostream>
using namespace std;
main()
{
    int i,j;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{7,8},{9,10}};
    int c[2][2];

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
    cout<<"addition:"<<endl;
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    
}