//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	
//	int carrots;
//
//	cout << "����� �� ���� ������ �ִ�?" << endl;
//	cin >> carrots;
//	cout << "���� �� ���� �� �ִ�. ";
//	carrots = carrots + 2;
//	cout << "���� ����� ��� " << carrots << "���̴�." << endl;
//	return 0;
//}

#include <iostream>

int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch = ch + 1;
	i = ch;
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
	cout.put(ch);

	cout.put('!');

	cout << endl << "����" << endl;
	return 0;
}

