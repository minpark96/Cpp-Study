//#include <iostream>
//#include "rectangle2D.h"
//
//int main()
//{
//	using namespace std;
//
//	Rectangle2D r1, r2, r3;
//	r1.setX(2);
//	r1.setY(2);
//	r1.setWidth(5.5);
//	r1.setHeight(4.9);
//	r2.setX(4);
//	r2.setY(5);
//	r2.setWidth(10.5);
//	r2.setHeight(3.2);
//	r3.setX(3);
//	r3.setY(5);
//	r3.setWidth(2.3);
//	r3.setHeight(5.4);
//
//	cout << "r1 면적, 둘레: " << r1.getArea() << ", " << r1.getPerimeter() << endl;
//	cout << "r1과 r2 포함 관계: ";
//	if (r1.contains(r2))
//		cout << "포함 됨" << endl;
//	else
//		cout << "포함 안됨" << endl;
//	cout << "r1과 r3 오버랩 관계: ";
//	if (r1.overlaps(r3))
//		cout << "겹침" << endl;
//	else
//		cout << "안 겹침" << endl;
//
//	return 0;
//}

#include <iostream>
#include "mypoint.h"
#include "circle2D.h"
#include "rectangle2D.h"

int main()
{
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);
	Circle2D c1(1, 1, 1.5);
	Rectangle2D r1(1, 1.5, 2, 3);
	using namespace std;
	cout << "p1(" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "p2(" << p2.getX() << ", " << p2.getY() << ")" << endl;
	cout << "p1과 p2의 거리: " << p1.distance(p2) << endl;
	cout << "원 c1 중심: (" << c1.getX() << ", " << c1.getY() << ")" << " 반지름: " << c1.getRadius() << endl;
	cout << "c1과 p1의 포함 관계: ";
	if (contains(c1, p1))
		cout << "포함 됨" << endl;
	else
		cout << "포함 안됨" << endl;
	cout << "c1과 p2의 포함 관계: ";
	if (contains(c1, p2))
		cout << "포함 됨" << endl;
	else
		cout << "포함 안됨" << endl;
	cout << "사각형 r1 중심: (" << r1.getX() << ", " << r1.getY() << ")" << " 너비: " << r1.getWidth() << ", 높이: " << r1.getHeight() << endl;
	cout << "r1과 p1의 포함 관계: ";
	if (contains(r1, p1))
		cout << "포함 됨" << endl;
	else
		cout << "포함 안됨" << endl;
	cout << "r1과 p2의 포함 관계: ";
	if (contains(r1, p2))
		cout << "포함 됨" << endl;
	else
		cout << "포함 안됨" << endl;

	return 0;
}

//#include <iostream>
//using std::cout;
//#include "stringbad.h"
//
//void callme1(StringBad&);
//void callme2(StringBad);
//
//int main()
//{
//	using std::endl;
//	{
//		cout << "내부 블록을 시작한다.\n";
//		StringBad headline1("Celery Stalks at Midnight");
//		StringBad headline2("Lettuce Prey");
//		StringBad sports("Spinach Leaves Bowl for Dollars");
//		cout << "headline1: " << headline1 << endl;
//		cout << "headline2: " << headline2 << endl;
//		cout << "sports: " << sports << endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << endl;
//		callme2(headline2);
//		cout << "headline2: " << headline2 << endl;
//		cout << "하나의 객체를 다른 객체로 초기화:\n";
//		StringBad sailor = sports;
//		cout << "sailor: " << sailor << endl;
//		cout << "하나의 객체를 다른 객체에 대입:\n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << endl;
//		cout << "이 블록을 빠져나온다.\n";
//	}
//	cout << "main()의 끝\n";
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "참조로 전달된 StringBad:\n";
//	cout << "    \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "값로 전달된 StringBad:\n";
//	cout << "    \"" << sb << "\"\n";
//}