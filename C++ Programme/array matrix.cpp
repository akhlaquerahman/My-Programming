#include<iostream>
using namespace std;

main()
{
    int i,j;
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{10,9,9},{7,7,9},{5,3,5}};
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"addition:"<<endl;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}