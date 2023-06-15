//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	using namespace std;
//	
//	int num;
//	cout << "n = ";
//	cin >> num;
//
//	for (int i = 0; i <= num; i++)
//	{
//		for (int j = 0; j < num - i; j++)
//		{
//			cout << "  ";
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << pow(2, k) << ' ';
//		}
//		for (int l = i - 1; l >= 0; l--)
//		{
//			cout << pow(2, l) << ' ';
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}

#include <iostream>
#include "cVector3.h"

int main()
{
	using namespace std;
	double x, y, z;
	cout << "> v1 x, y, z: ";
	cin >> x >> y >> z;
	cVector3 v1 = cVector3(x, y, z);

	cout << "> v2 x, y, z: ";
	cin >> x >> y >> z;
	cVector3 v2 = cVector3(x, y, z);

	cout << "v1 length: " << v1.length() << endl;
	cout << "v2 length: " << v2.length() << endl;

	double i = 3, j = 2;
	cout << "v1¿¡ " << i << "À» °ö : " << v1 * i << endl;
	cout << "v2¸¦ " << j << "·Î ³ª´®: " << v2 / j << endl;
	cout << "µÎ º¤ÅÍÀÇ dot: " << v1.Dot(v2) << endl;
	cout << "µÎ º¤ÅÍÀÇ cross: " << v1.Cross(v2) << endl;
	cout << "µÎ º¤ÅÍÀÇ »çÀÌ°¢: " << v1.Angle(v2) << endl;
	cout << "µÎ º¤ÅÍÀÇ dot: " << cVector3::Dot(v1, v2) << endl;
	cout << "µÎ º¤ÅÍÀÇ cross: " << cVector3::Cross(v1, v2) << endl;
	cout << "µÎ º¤ÅÍÀÇ »çÀÌ°¢: " << cVector3::Angle(v1, v2) << endl;

	return 0;
}