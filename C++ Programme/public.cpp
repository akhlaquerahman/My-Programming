#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void show()
    {
        a=10;
        cout<<"Inside Class = "<<a<<endl;
    }
};
int main()
{
    A obj;
    obj.show();
    obj.a=20;
    cout<<"Outside Class = "<<obj.a;
    return 0;
}