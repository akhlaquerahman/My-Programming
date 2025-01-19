#include<iostream>
using namespace std;
int main()
{
    char user[10] ;
	//int rate1, rate2, rate3,
    int units, bill;
	//rate1=1+400;
	//rate2=2+100;
    //rate3=4;
    cout<<"Enter name of user:"<<endl;
    cin>>user;
    
	cout<<"enter units consumed by user:"<<endl;
	cin>>units;
	if(units<=100)
	{
		bill=units*1+400;
		cout<<"totoal bill is = "<<bill<<endl;
	}
    else if(units<=200)
	{
		bill=units*2+100;
		cout<<"totoal bill is = "<<bill<<endl;
	}
    else if(units<=300)
	{
		bill=units*4;
		cout<<"totoal bill is = "<<bill<<endl;
	}
	else
	{
		cout<<"Not found ";
   }     
 }