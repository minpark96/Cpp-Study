//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	const int arsize = 20;
//	char name[arsize];
//	char dessert[arsize];
//	cout << "�̸��� �Է��Ͻʽÿ�: ";
//	cin.getline(name, arsize);
//	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: ";
//	cin.getline(dessert, arsize);
//	cout << "���ִ� " << dessert;
//	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//	cout << "�̸��� �Է��Ͻʽÿ�: ";
//	cin.get(name, ArSize).get();
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: ";
//	cin.get(dessert, ArSize).get();
//	cout << "���ִ� " << dessert;
//	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main()
//{
//	using namespace std;
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "string ��ü�� string ��ü�� ������ �� �ִ�: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "string ��ü�� C ��Ÿ�� ���ڿ��� ������ �� �ִ�.\n";
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "string ��ü���� ������ �� �ִ�: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "string ��ü���� �߰��� �� �ִ�.\n";
//	s1 += s2;
//	cout << "s1 += s2 --> s1 = " << s1 << endl;
//	s2 += " for a day";
//	cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <cstring>
//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	str1 = str2;
//	strcpy(charr1, charr2);
//
//	str1 += " paste";
//	strcat(charr1, " juice");
//
//	int len1 = str1.size();
//	int len2 = strlen(charr1);
//
//	cout << str1 << " ���ڿ����� "
//		<< len1 << "���� ���ڰ� ��� �ִ�.\n";
//	cout << charr1 << " ���ڿ����� "
//		<< len2 << "���� ���ڰ� ��� �ִ�.\n";
//
//	return 0;
//}
//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>
//#include <iostream>
//int main()
//{
//	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//	_CrtSetBreakAlloc(155);
//	using namespace std;
//	double* p3 = new double[3];
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
//	p3 = p3 + 1;
//	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
//	cout << "������ p3[2]�� " << p3[2] << "�̰�, ";
//	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
//	p3 = p3 - 1;
//	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
//	cout << "������ p3[1]�� " << p3[1] << "�̰�, ";
//	cout << "������ p3[2]�� " << p3[2] << "�̰�, ";
//	//_CrtDumpMemoryLeaks();
//	delete[] p3;
//	return 0;
//}

//#include <iostream>
//int main()
//{
//	using namespace std;
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//	short stacks[3] = { 3,2,1 };
//
//	double* pw = wages;
//	short* ps = &stacks[0];
//
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "pw �����Ϳ� 1�� ����:\n";
//	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
//
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps �����Ϳ� 1�� ����:\n";
//	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
//
//	cout << "�迭 ǥ��� �� ���ҿ� ����\n";
//	cout << "stacks[0] = " << stacks[0]
//		<< ", stacks[1] = " << stacks[1] << endl;
//
//	cout << "������ ǥ��� �� ���ҿ� ����\n";
//	cout << "*stacks = " << *stacks
//		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << sizeof(wages) << " = wages �迭�� ũ��\n";
//	cout << sizeof(pw) << " = pw �������� ũ��\n";
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//int main()
//{
//	using namespace std;
//	
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;
//
//	cout << animal << " and ";
//	cout << bird << "\n";
//	//cout << ps << "\n";
//
//	cout << "������ ������ �Է��Ͻʽÿ�: ";
//	cin >> animal;
//	//cin >> ps;
//
//	ps = animal;
//	cout << ps << "s!\n";
//	cout << "strcpy() ��� ��:\n";
//	cout << (int*)animal << ": " << animal << endl;
//	cout << (int*)ps << ": " << ps << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "strcpy() ��� ��:\n";
//	cout << (int*)animal << ": " << animal << endl;
//	cout << (int*)ps << ": " << ps << endl;
//	delete[] ps;
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//char* getname(void);
//int main()
//{
//	char* name;
//
//	name = getname();
//	cout << (int*)name << ": " << name << "\n";
//	delete[] name;
//
//	name = getname();
//	cout << (int*)name << ": " << name << "\n";
//	delete[] name;
//	return 0;
//}
//
//char* getname()
//{
//	char temp[80];
//	cout << "�̸��� �Է��Ͻʽÿ�: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct CandyBar
{
	string brandName;
	double weight;
	int calorie;
};

CandyBar* MakeCandyBar();
void PrintCandyBar(CandyBar* snack, int i);

int main()
{
	const int ARR_SIZE = 3;
	CandyBar** snacks = new CandyBar*[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		snacks[i] = MakeCandyBar();
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		PrintCandyBar(snacks[i], i);
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		delete[] snacks[i];
	}

	return 0;
}

CandyBar* MakeCandyBar()
{
	string name;
	double weight;
	int calorie;

	cout << "��ǥ���� �Է��ϼ���: ";
	cin >> name;
	cout << "�߷��� �Է��ϼ���: ";
	cin >> weight;
	cout << "Į�θ��� �Է��ϼ���: ";
	cin >> calorie;

	CandyBar* snack = new CandyBar{ name, weight, calorie };
	return snack;
}

void PrintCandyBar(CandyBar* snack, int i)
{
	cout << "CandyBar[" << i << "] ��ǥ��: " << snack->brandName << ", �߷�: " << snack->weight << ", Į�θ�: " << snack->calorie << endl;
}