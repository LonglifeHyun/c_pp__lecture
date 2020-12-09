#include <iostream>

using namespace std;

void print(int a, int b=9, int c=9)
{
	cout << a << ' ' << b << ' ' << c << endl;
}

int main(void)
{
	print(1);
	print(1,2);
	print(1,2,3);
	
	return 0;
}
