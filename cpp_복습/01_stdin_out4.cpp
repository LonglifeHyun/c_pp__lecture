#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int sum = 0;
	
	while( cin >> a) {
		sum += a;
	}
	cout << "sum : " << sum << endl;
	
	return 0;
}

