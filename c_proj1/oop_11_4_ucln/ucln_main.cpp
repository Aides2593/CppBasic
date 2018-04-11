#include "ucln.h"

int main()
{
	int a, b, c, d;
	cout <<"Nhap vao 4 so: ";
	cin >> a >> b >> c >> d;
	UCLN so1, so2, so3;
	//cout << so1.a;
	if (a = 1)
	so1.SetA(a);
	so1.SetB(b);
	so1.Tim_UCLN();

	so2.SetA(c);
	so2.SetB(d);
	so2.Tim_UCLN();

	so3.SetA(so1.GetUCLN());
	so3.SetB(so2.GetUCLN());
	so3.Tim_UCLN();

	cout << "UCLN cua 4 so la: " << so3.GetUCLN() <<endl;
	return 0;
}