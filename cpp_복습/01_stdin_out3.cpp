#include <iostream>

using namespace std;

int main(void)
{
	int a = 99;
	char b[10] = "99";
	
	if( cin >> a; ) ;	// !cin.fail()
	else {	
		cout << "First Input Failure" << endl;
		cin.clear();
	}
	
	if( cin >> b ) ;	// !cin.fail()
	else {
		cout << "Second Input Failure" << endl;
	}
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}
