#include<iostream>
using namespace std;

class A
{
    private:
    int a; // Private member 'a' is not accessible
    
    public: // member function access private member 'a'
    void show()  
    {
        a=10;    // 'a' is accessible

        cout<<"Inside Class = "<<a<<endl; 
    }
};

int main()
{
    A obj;
    obj.show();
    return 0;
}
