#include<iostream>
using namespace std;

class test {
    private:
        int n; // Declare n as a private member variable
    public:
        test() {
            n = 10;
            cout << n;
        }
        ~test() {
            cout << " Object destroyed"; // Corrected the spelling of "destroyed"
        }
};

int main() {
    test obj;
    return 0;
}
