#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;
    void disp()
    {
        cout<<"Base Class"<<endl;
    }
};
class B:public A
{
    public:
    void show()
    {
       cout<<"derive Class"<<endl; 
    }
};
int main()
{
    A* p;
    B obj;
    p=&obj;
    p->show();
    return 0;
}