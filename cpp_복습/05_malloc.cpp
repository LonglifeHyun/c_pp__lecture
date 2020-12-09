#include <iostream>

using namespace std;

int main(void)
{
	int* p;
	
	p = new int[10]; 	// array
	
	for(int i=0;i<10;++i)
		p[i] = i*11;
		
	for(int i=0;i<10;++i)
		cout << p[i] << ' ';
	cout <<endl;
	
	delete p;
	
	return 0;
}
	
