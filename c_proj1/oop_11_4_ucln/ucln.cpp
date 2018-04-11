#include "ucln.h"

void UCLN::SetA(int a1)
{
	a = a1;
}
void UCLN::SetB(int b1)
{
	b = b1;
}
void UCLN::Tim_UCLN()
{
	if (a == 0 || b == 0)
	{
		ucln = abs(a - b);
		return;
	}
	for (int i = abs(a); i > 0; i--)
		if (a % i == 0 && b % i == 0)
		{
			ucln = i;
			break;
		}
}
int UCLN::GetUCLN()
{
	return ucln;
}
int UCLN::GetA()
{
	return a;
}
UCLN::UCLN()
{
	return;
}
UCLN::~UCLN()
{
	return;
}