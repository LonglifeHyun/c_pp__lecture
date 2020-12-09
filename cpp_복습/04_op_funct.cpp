#include <iostream>

using namespace std;

struct vector {
	int x, y;
};

vector subtract(const vector& v1, const vector& v2)
{
	vector t={ v1.x - v2.x, v1.y-v2.y};
	return t;
}

vector operator -(const vector& v1, const vector& v2)
{	// subtract operator
	vector t={ v1.x - v2.x, v1.y-v2.y};
	return t;
}

vector operator -(const vector& v1)
{	// sign operator
	vector t={ -v1.x, -v1.y};
	return t;
}	

void print_vec(const vector& vv)
{
	cout << vv.x << ' ' << vv.y << endl;
}


int main(void)
{
	vector v1 = {2,4}, v2 = {1,3}, v3;
	
	v3 = subtract(v1,v2);
	print_vec(v3);	
	
	v3 = operator -(v1,v2);
	print_vec(v3);
	
	v3 = v1 - v2;
	print_vec(v3);

	v3 = operator -(v1);
	print_vec(v3);
	
	v3 = -v1;
	print_vec(v3);
	
	return 0;
}
