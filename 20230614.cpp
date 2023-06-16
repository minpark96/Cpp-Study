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
//	cout << "r1 ����, �ѷ�: " << r1.getArea() << ", " << r1.getPerimeter() << endl;
//	cout << "r1�� r2 ���� ����: ";
//	if (r1.contains(r2))
//		cout << "���� ��" << endl;
//	else
//		cout << "���� �ȵ�" << endl;
//	cout << "r1�� r3 ������ ����: ";
//	if (r1.overlaps(r3))
//		cout << "��ħ" << endl;
//	else
//		cout << "�� ��ħ" << endl;
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
	cout << "p1�� p2�� �Ÿ�: " << p1.distance(p2) << endl;
	cout << "�� c1 �߽�: (" << c1.getX() << ", " << c1.getY() << ")" << " ������: " << c1.getRadius() << endl;
	cout << "c1�� p1�� ���� ����: ";
	if (contains(c1, p1))
		cout << "���� ��" << endl;
	else
		cout << "���� �ȵ�" << endl;
	cout << "c1�� p2�� ���� ����: ";
	if (contains(c1, p2))
		cout << "���� ��" << endl;
	else
		cout << "���� �ȵ�" << endl;
	cout << "�簢�� r1 �߽�: (" << r1.getX() << ", " << r1.getY() << ")" << " �ʺ�: " << r1.getWidth() << ", ����: " << r1.getHeight() << endl;
	cout << "r1�� p1�� ���� ����: ";
	if (contains(r1, p1))
		cout << "���� ��" << endl;
	else
		cout << "���� �ȵ�" << endl;
	cout << "r1�� p2�� ���� ����: ";
	if (contains(r1, p2))
		cout << "���� ��" << endl;
	else
		cout << "���� �ȵ�" << endl;

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
//		cout << "���� ����� �����Ѵ�.\n";
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
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ:\n";
//		StringBad sailor = sports;
//		cout << "sailor: " << sailor << endl;
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� ����:\n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << endl;
//		cout << "�� ����� �������´�.\n";
//	}
//	cout << "main()�� ��\n";
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "������ ���޵� StringBad:\n";
//	cout << "    \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "���� ���޵� StringBad:\n";
//	cout << "    \"" << sb << "\"\n";
//}