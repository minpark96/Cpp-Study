//#include <iostream>
//#include <vector>
//#include "stopwatch.h"
//
//using namespace std;
//void Hanoi(int num, vector<int>& base, vector<int>& pass, vector<int>& dest, vector<int>** pv);
//void Print(vector<int>** pv);
//
//static int height;
//
//int main()
//{
//	cout << "�� ��?: ";
//	cin >> height;
//	StopWatch sw;
//	cout << "���� �ð�: " << sw.getStartTime() << "msec" << endl;
//
//	vector<int> t1, t2, t3;
//	vector<int>* pv[3] = { &t1, &t2, &t3 };
//
//	for (int i = height; i > 0; i--)
//		t1.push_back(i);
//	Print(pv);
//	Hanoi(height, t1, t2, t3, pv);
//	sw.stop();
//	cout << "���� �ð�: " << sw.getEndTime() << "msec" << endl;
//	cout << "�ɸ� �ð�: " << sw.getElapsedTime() << "msec" << endl;
//
//	return 0;
//}
//
//void Hanoi(int num, vector<int>& base, vector<int>& pass, vector<int>& dest, vector<int>** pv)
//{
//	if (num == 0) return;
//	Hanoi(num - 1, base, dest, pass, pv);
//	dest.push_back(base.back());
//	base.pop_back();
//	Print(pv);
//	Hanoi(num - 1, pass, base, dest, pv);
//}
//
//void Print(vector<int>** pv)
//{
//	cout << "=========" << endl;
//	for (int i = height - 1; i > -1; i--)
//	{
//		if ((*pv[0]).size() < i + 1 && (*pv[1]).size() < i + 1 && (*pv[2]).size() < i + 1)
//			continue;
//		else
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if ((*pv[j]).size() < i + 1)
//					cout << "   ";
//				else
//					cout << "[" << (*pv[j])[i] << "]";
//			}
//		}
//		cout << endl;
//	}
//}

#include <iostream>
#include <cstring>
#include "worker0.h"
#include "queuetp.h"

const int SIZE = 3;

int main()
{
	QueueTP<Worker*> que(SIZE);
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	char ch;
	cout << "����� �߰��Ϸ��� A, ����� ó���Ϸ��� P, \n"
		<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	while (cin >> ch && std::toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!std::isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a':
				if (que.isfull())
					cout << "ť�� ���� �� �ֽ��ϴ�.\n";
				else
				{
					char choice;
					cout << "������ �Է��Ͻʽÿ�:\n"
						<< "w: ������ s: ���� "
						<< "t: ���� �� ������ q: ����\n";
					cin >> choice;
					while (strchr("wstq", choice) == NULL)
					{
						cout << "w, s, t, q �߿��� �ϳ��� �����Ͻʽÿ�: ";
						cin >> choice;
					}
					if (choice == 'q')
						break;

					Worker* wo;
					cin.get();
					switch (choice)
					{
					case 'w': wo = new Waiter;
						wo->Set();
						break;
					case 's': wo = new Singer;
						wo->Set();
						break;
					case 't': wo = new SingingWaiter;
						wo->Set();
						break;
					}
					que.enqueue(wo);
				}
				break;
			case 'P':
			case 'p': while (1)
			{
				if (que.isempty())
				{
					cout << "ť�� ��� �ֽ��ϴ�.\n";
					break;
				}
				else
				{
					Worker* wo;
					que.dequeue(wo);
					wo->Show();
					cout << "#" << " ����� ó���߽��ϴ�." << endl;
				}
			}
		}
		cout << "����� �߰��Ϸ��� A, ����� ó���Ϸ��� P, \n"
			<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	}

	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

//#include <iostream>
//#include <string>
//#include <cctype>
//#include "stacktp.h"
//using std::cin;
//using std::cout;
//
//int main()
//{
//	Stack<std::string> st;
//	char ch;
//	std::string po;
//	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
//		<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
//	while (cin >> ch && std::toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!std::isalpha(ch))
//		{
//			cout << '\a';
//			continue;
//		}
//		switch (ch)
//		{
//		case 'A':
//		case 'a': cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ�: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "������ ���� �� �ֽ��ϴ�.\n";
//			else
//				st.push(po);
//			break;
//		case 'P':
//		case 'p': if (st.isempty())
//					cout << "������ ��� �ֽ��ϴ�.\n";
//				else 
//				{
//					st.pop(po);
//					cout << "#" << po << " �ֹ����� ó���߽��ϴ�.\n";
//					break;
//				}
//		}
//		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
//			<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
//	}
//	cout << "���α׷��� �����մϴ�.\n";
//	return 0;
//}