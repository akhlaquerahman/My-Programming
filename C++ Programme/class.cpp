
#include <iostream> 
using namespace std; 

class akhlaque 
{ 
public: 
	string rahman; 

	void printname() 
	{ 
		cout << "Rahman is: " << rahman; 
	} 
}; 

int main() 
{ 

	akhlaque obj1; 

	obj1.rahman = "akhlaquerahman"; 

	obj1.printname(); 

	return 0; 
}
