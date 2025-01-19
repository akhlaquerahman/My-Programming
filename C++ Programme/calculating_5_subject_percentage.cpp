#include<iostream>
using namespace std;
int main()
{
    string clas;
    int math,phy,che,eng,hindi,total,percentage;
    cout<<"Choose Your Class(10th,12th): ";
    cin>>clas;
    if(clas=="10th")
    {
        cout<<"Enter the Marks of Mathematics: ";
        cin>>math;
        cout<<"Enter the Marks of Science: ";
        cin>>phy;
        cout<<"Enter the Marks of Sociel Science: ";
        cin>>che;
        cout<<"Enter the Marks of English: ";
        cin>>eng;
        cout<<"Enter the Marks of Hindi: ";
        cin>>hindi;

        total=math+phy+che+eng+hindi;
        cout<<"Your Total Marks: = "<<total<<endl;

        percentage=total/5;
        cout<<"Your percentage is: = "<<percentage<<"%";
    }
    else if(clas=="12th")
    {
        cout<<"Enter the Marks of Mathematics: ";
        cin>>math;
        cout<<"Enter the Marks of Physics: ";
        cin>>phy;
        cout<<"Enter the Marks of Chemistry: ";
        cin>>che;
        cout<<"Enter the Marks of English: ";
        cin>>eng;
        cout<<"Enter the Marks of Hindi: ";
        cin>>hindi;

        total=math+phy+che+eng+hindi;
        cout<<"Your Total Marks: = "<<total<<endl;

        percentage=total/5;
        cout<<"Your percentage is: = "<<percentage<<"%";
    }

    else
    {
        cout<<"invalid Answer";
    }

    return 0;
}
