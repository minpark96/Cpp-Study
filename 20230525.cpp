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

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	char ch = 'M';
//	int i = ch;
//	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;
//
//	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;
//
//	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
//	cout.put(ch);
//
//	cout.put('!');
//
//	cout << endl << "����" << endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout << "Ű�� �Է��ϼ���: ___cm\b\b\b\b\b";
//	int height;
//	cin >> height;
//	cout << endl;
//	const int meter = height / 100;
//	const int centimeter = height % 100;
//
//	cout << "Ű�� " << meter << "m " << centimeter << "cm �Դϴ�!" << endl;
//
//	return 0;
//}

#include <iostream>

//// 3��
//int main()
//{
//	using namespace std;
//
//	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:" << endl;
//	cout << "����, ������ �Է��Ͻÿ�: ";
//	int degree;
//	cin >> degree;
//	cout << "������, �а��� �Է��Ͻÿ�: ";
//	int min;
//	cin >> min;
//	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
//	int sec;
//	cin >> sec;
//
//	const double latitude = (double) degree + min / 60.0 + sec / 60.0 / 60.0;
//
//	cout << degree << "��, " << min << "��, " << sec << "�� = " << latitude << "��" << endl;
//
//	return 0;
//}

//// 5��
//int main()
//{
//	using namespace std;
//	cout << "���� �α����� �Է��Ͻÿ�: ";
//	long long worldPop;
//	cin >> worldPop;
//	cout << "�̱��� �α����� �Է��Ͻÿ�: ";
//	long long targetPop;
//	cin >> targetPop;
//
//	const double proportion = (double)targetPop / (double)worldPop * 100.0;
//	cout << "���� �α������� �̱��� �����ϴ� ������ " << proportion << "%�̴�." << endl;
//
//	return 0;
//}

// 7��
int main()
{
	using namespace std;
	cout << "�ֹ��� �Һ�(���� ��Ÿ��)�� �Է��Ͻÿ�:     liters/100km\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	double liters;
	cin >> liters;

	const double miles = 62.14;
	const double gallons = liters / 3.875;
	const double mpg = miles / gallons;
	cout << "���� ��Ÿ��: " << mpg << "mpg" << endl;

	return 0;
}