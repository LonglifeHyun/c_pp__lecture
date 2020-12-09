#include <iostream>

using namespace std;

int main(void)
{
	int a = 99;
	char b[10] = "99";
	
	cin >> a;
	if( !cin ) {	// cin.fail()
		cout << "First Input Failure" << endl;
		cin.clear();
	}
	
	cin >> b;
	if( !cin ) {
		cout << "Second Input Failure" << endl;
	}
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}
