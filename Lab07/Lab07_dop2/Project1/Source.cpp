#include <iostream>
using namespace std;
void main()
{
	unsigned char k;
	int a, b, delta_actet1, delta_actet2;
	int maskact2 = 63;
	int actet1 = 192;
	int actet2 = 128;
	char tmp[33];
	char tmp2[33];
	a = 1044;
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	delta_actet2 = (a & maskact2);
	_itoa_s(delta_actet2, tmp, 2);
	cout << tmp << "  delta_actet2" << endl;

	delta_actet1 = a >> 6;
	_itoa_s(delta_actet1, tmp, 2);
	cout << tmp << "  delta_actet1" << endl;

	actet1 = (actet1 | delta_actet1);
	_itoa_s(actet1, tmp, 2);
	cout << tmp << "  actet1" << endl;

	actet2 = (actet2 | delta_actet2);
	actet2 = actet2 << 6;
	_itoa_s(actet2, tmp, 2);
	cout << tmp << "  actet2" << endl;

}