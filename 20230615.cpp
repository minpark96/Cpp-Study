//#include <iostream>
//#include "string1.h"
//const int ArSize = 10;
//const int MaxLen = 81;
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	String name;
//	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�?\n>> ";
//	cin >> name;
//
//	cout << name << " ��! ������ ���� �Ӵ� " << ArSize << "���� �Է��� �ֽʽÿ� (�������� Enter):\n";
//	String sayings[ArSize];
//	char temp[MaxLen];
//	int i;
//	for (i = 0; i < ArSize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin && cin.get() != '\n')
//			continue;
//		if (!cin || temp[0] == '\0')
//			break;
//		else
//			sayings[i] = temp;
//	}
//	int total = i;
//	if (total > 0)
//	{
//
//		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
//		for (i = 0; i < total; i++)
//			cout << sayings[i][0] << ": " << sayings[i] << endl;
//
//		int shortest = 0;
//		int first = 0;
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < sayings[shortest].length())
//				shortest = i;
//			if (sayings[i] < sayings[first])
//				first = i;
//		}
//		cout << "���� ª�� �Ӵ�:\n" << sayings[shortest] << endl;
//		cout << "���������� ���� �տ� ������ �Ӵ�:\n" << sayings[first] << endl;
//		cout << "�� ���α׷��� " << String::HowMany() << "���� String ��ü�� ����Ͽ����ϴ�. �̻�!\n";
//	}
//	else
//		cout << "�Է±���! �̻�.\n";
//	return 0;
//}

#include <iostream>
using namespace std;
#include "string1.h"
int main()
{
	String s1(" and I am a C++ student.");
	String s2 = "���� �̸��� �Է��Ͻʽÿ�: ";
	String s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3 + "park";
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "���� ���ڿ�����\n" << s2 << "\n���� 'A'�� "
		<< s2.has('A') << "�� ��� �ֽ��ϴ�.\n";
	s1 = "red";
	String rgb[3] = { String(s1), String("green"), String("blue") };
	cout << "���� ������� �̸��� �ϳ��� �Է��Ͻʽÿ�: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "�¾ҽ��ϴ�!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "�ٽ� �Է��Ͻʽÿ�: ";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}