#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	int a, sum = 0;
	
	ifstream ifs("input.txt");
	if( !ifs.is_open() ) {
		cerr << "Error: Input File." << endl;
		return -1;
	}
	
	while(ifs >> a) {
		sum += a;
	}
	ifs.close();
	
	ofstream ofs("output.txt");
	if( !ofs.is_open() ) {
		cerr << "Error: Output File." << endl;
		return -1;
	}
	ofs << "sum : " << sum << endl;
	ofs.close();
	
	return 0;
}
	
