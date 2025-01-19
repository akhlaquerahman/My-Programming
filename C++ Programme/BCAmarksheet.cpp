#include<iostream>
using namespace std;
main()
{
    
       char name[7],cl[5];
        int roll,c,english,digital,it,fundamentle,uhv,total,percentage;
        cout<<"What is your Name:"<<endl;
        cin>>name;
        cout<<"What is your Roll No.:"<<endl;
        cin>>roll;
        cout<<"What is your Class:"<<endl;
        cin>>cl;
        cout<<"enter marks of C programme= ";
        cin>>c;
        cout<<"enter marks of English= ";
        cin>>english;
        cout<<"enter marks of Digital Electronics= ";
        cin>>digital;
        cout<<"enter marks of Information Technology= ";
        cin>>it;
        cout<<"enter marks of Computer Fundamentle= ";
        cin>>fundamentle;
         cout<<"enter marks of Computer Universal Human Value= ";
        cin>>uhv;
        total=c+english+digital+it+fundamentle+uhv;
        cout<<"Total Marks = "<<total<<endl;
        percentage=total/6;
        cout<<"Your percentage= "<<percentage<<"%"<<endl;
        if (total>=480)
        {
            cout<<"You are Top";
        }
        else if (total>=400)
        {
            cout<<"Good perfomance";
        }
        else if (total>=300)
        {
            cout<<"you are first division";
        }
        else if (total>=225)
        {
            cout<<"you are second division";
        }
        else if (total>=190)
        {
            cout<<"you are third division";
        }
       else
        {
        cout<<"You are fail";
        }
}