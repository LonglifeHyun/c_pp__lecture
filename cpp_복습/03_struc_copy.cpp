#include <iostream>

using namespace std;

struct date{
	int d,m,y;
};

void f(date dt)
{
	cout << dt.d << endl;
	cout << dt.m << endl;
	cout << dt.y << endl;
}

int main(void)
{
	date a = {31, 12, 2010};
	date b = a;
	
	f(a);
	
	return 0;
}
