//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double velocity, acceleration;
//
//	cout << "Speed and Accelation : ";
//	cin >> velocity >> acceleration;
//
//	const double distance = velocity * velocity / (2 * acceleration);
//
//	cout << "Minimum runway length : " << distance << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	double x1, x2, y1, y2;
//
//	cout << "(x1, y1) : ";
//	cin >> x1 >> y1;
//	cout << "(x2, y2) : ";
//	cin >> x2 >> y2;
//
//	const double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//
//	cout << "Distance : " << distance << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//int main()
//{
//	using namespace std;
//
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "�ڵ��� ����Ŀ�� ������ �Է��Ͻÿ�: ";
//	cin.getline(automobile, 50);
//	cout << "������ �Է��Ͻÿ�: ";
//	cin >> year;
//	cout << "���� ������ �Է��Ͻÿ�: ";
//	cin >> a_price;
//	d_price = 0.193 * a_price;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "����Ŀ�� ����: " << automobile << endl;
//	cout << "����: " << year << endl;
//	cout << "���� ���� $" << a_price << endl;
//	cout << "���� ���� $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "����Ŀ�� ����: " << automobile << endl;
//	outFile << "����: " << year << endl;
//	outFile << "���� ���� $" << a_price << endl;
//	outFile << "���� ���� $" << d_price << endl;
//
//	outFile.close();
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//const int SIZE = 60;
//int main()
//{
//	using namespace std;
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "������ ������ �̸��� �Է��Ͻÿ�: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << filename << " ������ �� �� �����ϴ�." << endl;
//		cout << "���α׷��� �����մϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	if (inFile.eof())
//		cout << "���� ���� �����߽��ϴ�.\n";
//	else if (inFile.fail())
//		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
//	else
//		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";
//	if (count == 0)
//		cout << "�����Ͱ� �����ϴ�.\n";
//	else
//	{
//		cout << "���� �׸��� ����: " << count << endl;
//		cout << "�հ�: " << sum << endl;
//		cout << "���: " << sum / count << endl;
//	}
//	inFile.close();
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

const int SIZE = 60;
const int strsize = 32;
const int BOP_SIZE = 20;

using namespace std;

struct Bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

void WriteFile();
void ReadFile(int select);
void PrintFile(Bop* bop, int count, int select);

int main()
{
	char select;
	bool isQuit = false;

	while (!isQuit)
	{
		cout << "a. ȸ�����" << endl;
		cout << "b. �Ǹ����� ����" << endl;
		cout << "c. �������� ����" << endl;
		cout << "d. BOP ���̵�� ����" << endl;
		cout << "e. ȸ���� ������ ������ ����" << endl;
		cout << "q. ����" << endl;
		cout << "���� : ";
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 'a':
			// ���� �Է�
			WriteFile();
			break;
		case 'b':
			// ���� ��� �Ǹ�
			ReadFile(0);
			break;
		case 'c':
			//���� ��� ����
			ReadFile(1);
			break;
		case 'd':
			// ���� ��� BOP ���̵�
			ReadFile(2);
			break;
		case 'e':
			// ���� ��� ȸ�� ����
			ReadFile(3);
			break;
		case 'q':
			// ����
			cout << "�����մϴ�!" << endl;
			isQuit = true;
			break;
		default:
			cout << "�߸��� �Է� �� �Դϴ�!" << endl;
			break;
		}
	}

	return 0;
}

void WriteFile()
{
	Bop bop;
	ofstream outFile;
	char filename[SIZE] = "bop_list.txt";
	outFile.open(filename, ios::app); // ios::app ���� �̾��
	if (!outFile.is_open())
	{
		cout << filename << " ������ �� �� �����ϴ�." << endl;
		return;
	}

	cout << "ȸ�� �Ǹ��� �Է��Ͻÿ�: ";
	cin.getline(bop.fullname, strsize);
	outFile << bop.fullname << endl;
	cout << "ȸ�� ������ �Է��Ͻÿ�: ";
	cin.getline(bop.title, strsize);
	outFile << bop.title << endl;
	cout << "ȸ�� BOP ���̵� �Է��Ͻÿ�: ";
	cin.getline(bop.bopname, strsize);
	outFile << bop.bopname << endl;
	cout << "���ϴ� ����� �����Ͻÿ�(0 => fullname, 1 => title, 2 => bopname): ";
	cin >> bop.preference;
	outFile << bop.preference << endl;

	outFile.close();
}

void ReadFile(int select)
{
	ifstream inFile;
	char filename[SIZE] = "bop_list.txt";
	Bop bopList[BOP_SIZE] = { 0 };
	int count = -1;

	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << filename << " ������ �� �� �����ϴ�." << endl;
		return;
	}

	do // inFile.good()�� �Է¿� ���� ������ �б� �õ��� ���� ����� �ϴ� �ѹ� �о�� ��
	{
		++count;
		inFile.getline(bopList[count].fullname, strsize);
		inFile.getline(bopList[count].title, strsize);
		inFile.getline(bopList[count].bopname, strsize);
		inFile >> bopList[count].preference;
		inFile.ignore();
	} while (inFile.good()); // �������� ���� ���� �� �ѹ� ����;; => count������ ó�� ��

	if (count == 0)
		cout << "�����Ͱ� �����ϴ�.\n";
	else if (inFile.eof()) // �� �о�����
		PrintFile(bopList, count, select); // ���
	else if (inFile.fail())
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
	else
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";

	inFile.close();
}

void PrintFile(Bop* bop, int count, int select) // count: bop�迭 ũ��
{
	switch (select) // ó�� �޴� ���ð� 0: b, 1: c, 2: d, 3: e  
	{
	case 0: // 0: �Ǹ�
		for (int i = 0; i < count; i++)
		{
			if (strcmp(bop[i].fullname, "") == 0)
				continue;
			cout << bop[i].fullname << endl;
		}
		break;
	case 1: // 1: ����
		for (int i = 0; i < count; i++)
		{
			if (strcmp(bop[i].title, "") == 0)
				continue;
			cout << bop[i].title << endl;
		}
		break;
	case 2: // 2: BOP
		for (int i = 0; i < count; i++)
		{
			if (strcmp(bop[i].bopname, "") == 0)
				continue;
			cout << bop[i].bopname << endl;
		}
		break;
	case 3: // 3: ȸ�� ����
		for (int i = 0; i < count; i++)
		{
			switch (bop[i].preference) // ȸ�� ���� ���� ���� ���
			{
			case 0:
				cout << bop[i].fullname << endl;
				break;
			case 1:
				cout << bop[i].title << endl;
				break;
			case 2:
				cout << bop[i].bopname << endl;
				break;
			}
		}
		break;
	}
}
