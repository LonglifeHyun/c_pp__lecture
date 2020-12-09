#include <iostream>

using namespace std;

#define MAX_V(a,b) ((a) > (b) ? (a) : (b))

inline int max_v(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int x, y;
	
	x=3, y=2;
	cout << MAX_V(x,y) << endl;
	
	x=3, y=2;
	cout << MAX_V(++x, y) << endl;	// oops!

	x=3, y=2;
	cout << max_v(x,y) << endl;
	
	x=3, y=2;
	cout << max_v(++x, y) << endl;
	
	return 0;
}
	
