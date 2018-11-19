#include <iostream>
#include <string>	
using namespace std;

string sFname;

int main()
{
	cout << "Please Enter Name" << endl;
	cin >> sFname;
	cout << "Hello World" << endl;
	cout << "Hi " + sFname << endl; 
	system("pause");
	return 0;

}

