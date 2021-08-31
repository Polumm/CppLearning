#include "abs.h"
#include "OutPutArray.h"
int main()
{
	int a = -9;
	double b = -9.2;
	cout << abs(a) << endl << abs(b) << endl;
	const int sz1 = 3, sz2 = 4, sz3 = 5;
	int a1[sz1] = { 1,3,5 };
	float a2[sz2] = { 1.1, 2.2, 3.3, 4.4 };
	char a3[sz3] = "asdf";
	OutPutArray(a1,sz1);
	OutPutArray(a2,sz2);
	OutPutArray(a3,sz3);
}