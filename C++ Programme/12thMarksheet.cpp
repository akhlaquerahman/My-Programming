#include<iostream>
using namespace std;
main()
{
    
       char name[7];
        int roll,cl,math,english,physics,chemistry,hindi,total,percentage;
        cout<<"What is your Name:"<<endl;
        cin>>name;
        cout<<"What is your Roll No.:"<<endl;
        cin>>roll;
        cout<<"What is your Class:"<<endl;
        cin>>cl;
        cout<<"enter marks of Mathematics= ";
        cin>>math;
        cout<<"enter marks of English= ";
        cin>>english;
        cout<<"enter marks of Physics= ";
        cin>>physics;
        cout<<"enter marks of Chemistry= ";
        cin>>chemistry;
        cout<<"enter marks of Hindi= ";
        cin>>hindi;
        total=math+english+physics+chemistry+hindi;
        cout<<"Total Marks = "<<total<<endl;
        percentage=total/5;
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
       else (total<190);
        {
        cout<<"You are fail";
        }
}