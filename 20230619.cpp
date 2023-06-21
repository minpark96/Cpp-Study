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
//	cout << "몇 층?: ";
//	cin >> height;
//	StopWatch sw;
//	cout << "시작 시간: " << sw.getStartTime() << "msec" << endl;
//
//	vector<int> t1, t2, t3;
//	vector<int>* pv[3] = { &t1, &t2, &t3 };
//
//	for (int i = height; i > 0; i--)
//		t1.push_back(i);
//	Print(pv);
//	Hanoi(height, t1, t2, t3, pv);
//	sw.stop();
//	cout << "종료 시간: " << sw.getEndTime() << "msec" << endl;
//	cout << "걸린 시간: " << sw.getElapsedTime() << "msec" << endl;
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
	cout << "사원을 추가하려면 A, 사원을 처리하려면 P, \n"
		<< "종료하려면 Q를 입력하십시오.\n";
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
					cout << "큐가 가득 차 있습니다.\n";
				else
				{
					char choice;
					cout << "직종을 입력하십시오:\n"
						<< "w: 웨이터 s: 가수 "
						<< "t: 가수 겸 웨이터 q: 종료\n";
					cin >> choice;
					while (strchr("wstq", choice) == NULL)
					{
						cout << "w, s, t, q 중에서 하나를 선택하십시오: ";
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
					cout << "큐가 비어 있습니다.\n";
					break;
				}
				else
				{
					Worker* wo;
					que.dequeue(wo);
					wo->Show();
					cout << "#" << " 사원을 처리했습니다." << endl;
				}
			}
		}
		cout << "사원을 추가하려면 A, 사원을 처리하려면 P, \n"
			<< "종료하려면 Q를 입력하십시오.\n";
	}

	cout << "프로그램을 종료합니다.\n";
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
//	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
//		<< "종료하려면 Q를 입력하십시오.\n";
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
//		case 'a': cout << "추가할 주문서의 번호를 입력하십시오: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "스택이 가득 차 있습니다.\n";
//			else
//				st.push(po);
//			break;
//		case 'P':
//		case 'p': if (st.isempty())
//					cout << "스택이 비어 있습니다.\n";
//				else 
//				{
//					st.pop(po);
//					cout << "#" << po << " 주문서를 처리했습니다.\n";
//					break;
//				}
//		}
//		cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
//			<< "종료하려면 Q를 입력하십시오.\n";
//	}
//	cout << "프로그램을 종료합니다.\n";
//	return 0;
//}