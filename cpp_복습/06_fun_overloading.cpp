#include <iostream>

using namespace std;

void print(int a)
{
	cout << a << endl;
}

void print(int a, int b)
{
	cout << a << ' ' << b << endl;
}

void print(double a)
{
	cout << a << endl;
}

int main(void)
{
	print(3);
	print(3, 4);
	print(3.14);
	
	return 0;
}
