#include <iostream>
#include "cVector3.h"

int main()
{
	using namespace std;
	double x, y, z;
	cout << "> u x, y, z: ";
	cin >> x >> y >> z;
	cVector3 u = cVector3(x, y, z);

	cout << "> v x, y, z: ";
	cin >> x >> y >> z;
	cVector3 v = cVector3(x, y, z);

	cout << endl << "1." << endl;
	cout << "(a) u+v: " << u + v << endl;
	cout << "(b) u-v: " << u - v << endl;
	cout << "(c) 3u+2v: " << 3 * u + 2 * v << endl;
	cout << "(d) -2u+v: " << -2 * u + v << endl << endl;

	cout << "2." << endl;
	cout << "u: " << u.Normalize() << endl;
	cout << "v: " << v.Normalize() << endl << endl;

	cout << "3." << endl;
	cout << "(a): " << cVector3(1, 1, 1).Angle(cVector3(2, 3, 4)) << endl;
	cout << "(b): " << cVector3(1, 1, 0).Angle(cVector3(-2, 2, 0)) << endl;
	cout << "(c): " << cVector3(-1, -1, -1).Angle(cVector3(3, 1, 0)) << endl << endl;

	cout << "4." << endl;
	cout << "w: " << cVector3(0 - 0, 0 - 1, 0 - 3).Cross(cVector3(0 - 5, 0 - 1, 0 - 0)) << endl;

	return 0;
}

//#include <iostream>
//#include "circle2D.h"
//
//int main()
//{
//	using namespace std;
//
//	Circle2D c1 = Circle2D(2, 2, 5.5); 
//	Circle2D c2 = Circle2D(2, 2, 5.5);
//	Circle2D c3 = Circle2D(4, 5, 10.5);
//
//	cout << "c1의 면적: " << c1.getArea() << endl;
//	cout << "c1의 둘레: " << c1.getPerimeter() << endl;
//	double x = 3, y = 3;
//	cout << "x: " << x << ", y: " << y << "는 c1에 포함되는가?: ";
//	if (c1.contains(x, y))
//		cout << "그렇다." << endl;
//	else
//		cout << "아니다." << endl;
//
//	cout << "c2는 c1에 포함되는가?: ";
//	if (c1.contains(c2))
//		cout << "그렇다." << endl;
//	else
//		cout << "아니다." << endl;
//
//	cout << "c3는 c1과 겹치는가?: ";
//	if (c1.overlaps(c3))
//		cout << "그렇다." << endl;
//	else
//		cout << "아니다." << endl;
//
//	return 0;
//}