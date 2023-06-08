//#include <iostream>
//#include <cmath>
//
//struct Point
//{
//	double x, y;
//};
//
//struct Vector3
//{
//	double a, b, c;
//};
//
//void CrossProduct(Vector3& v1, Vector3& v2, Vector3& v3);
//double DotProduct(Vector3& v1, Vector3& v2);
//
//int main()
//{
//	using namespace std;
//	Point p[3];
//	cout << "p0: ";
//	cin >> p[0].x >> p[0].y;
//	cout << "p1: ";
//	cin >> p[1].x >> p[1].y;
//	cout << "p2: ";
//	cin >> p[2].x >> p[2].y;
//
//	Vector3 v1, v2, v3, up;
//	v1 = { p[1].x - p[0].x, p[1].y - p[0].y, 0 };
//	v2 = { p[2].x - p[0].x, p[2].y - p[0].y, 0 };
//	up = { 0, 0, 1 };
//	CrossProduct(v1, v2, v3);
//
//	if (DotProduct(up, v3) > 0)
//		cout << "p2�� ���� ���ʿ� �ִ�." << endl;
//	else if (DotProduct(up, v3) < 0)
//		cout << "p2�� ���� �����ʿ� �ִ�." << endl;
//	else
//		cout << "p2�� ���� �ִ�." << endl;
//
//	return 0;
//}
//
//void CrossProduct(Vector3& v1, Vector3& v2, Vector3& v3)
//{
//	v3 = { v1.b * v2.c - v1.c * v2.b, 
//		v1.c * v2.a - v1.a - v2.c, 
//		v1.a * v2.b - v1.b * v2.a };
//}
//
//double DotProduct(Vector3& v1, Vector3& v2)
//{
//	return v1.a * v2.a + v1.b * v2.b + v1.c * v2.c;
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	string target;
//	cout << "������ �ܾ� -> ";
//	cin >> target;
//	string ans(target.size(), '*');
//	int countTotal = 0, countFault = 0;
//
//	while (true)
//	{
//		if (ans.compare(target) == 0)
//			break;
//
//		char ch;
//		cout << "�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. " << ans << " > ";
//		cin >> ch;
//
//		int idx = target.find(ch);
//		if (idx != string::npos)
//		{
//			for (int i = idx; i < target.size(); i++)
//			{
//				if (ans.find(ch, i) == string::npos)
//					break;
//				idx = target.find(ch, i + 1);
//			}
//
//			if (idx == string::npos)
//			{
//				countFault++;
//				countTotal++;
//				cout << ch << "�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�." << endl;
//			}
//			else
//			{
//				countTotal++;
//				ans[target.find(ch, idx)] = ch;
//			}
//		}
//		else
//		{
//			countFault++;
//			countTotal++;
//			cout << ch << "�� �ܾ ���Ե��� �ʽ��ϴ�." << endl;
//		}
//	}
//
//	cout << "�� " << countFault << "�� ����, " << countTotal << "�� ���� ����! " << target << endl;
//
//	return 0;
//}


//#include <iostream>
//#include "stock.h"
//
//const int STKS = 4;
//int main()
//{
//	Stock stocks[STKS] =
//	{
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << "���� �ֽ� ����Ʈ:\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//		stocks[st].show();
//
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = &top->topval(stocks[st]);
//
//	std::cout << "\n�ְ� ��ġ�� �ֽ�:\n";
//	top->show();
//	return 0;
//}

#include <iostream>
#include "move.h"

int main()
{
	using namespace std;
	Move m1 = Move();
	Move m2 = Move();

	while (1)
	{
		int menu;
		double x, y;
		cout << "�޴� ���� (1)�̵� (2)���� ��ǥ ��� (3)���� (4) ����" << endl;
		cout << "> ";
		cin >> menu;
		if (menu == 4)
			break;

		switch (menu)
		{
		case 1:
			cout << "(x, y) > ";
			cin >> x >> y;
			m2 = Move(x, y);
			m1 = m1.add(m2);
			break;
		case 2:
			m1.showmove();
			break;
		case 3:
			m1.reset();
			break;
		}
	}

	return 0;
}

//int* pa;
//0F=========================================================

//B1F========================================================

//B2F========================================================
