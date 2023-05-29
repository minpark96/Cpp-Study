//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	const int arsize = 20;
//	char name[arsize];
//	char dessert[arsize];
//	cout << "이름을 입력하십시오: ";
//	cin.getline(name, arsize);
//	cout << "좋아하는 디저트를 입력하십시오: ";
//	cin.getline(dessert, arsize);
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
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
//	cout << "이름을 입력하십시오: ";
//	cin.get(name, ArSize).get();
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << "좋아하는 디저트를 입력하십시오: ";
//	cin.get(dessert, ArSize).get();
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
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
//	cout << "string 객체를 string 객체에 대입할 수 있다: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "string 객체에 C 스타일 문자열을 대입할 수 있다.\n";
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "string 객체들을 결합할 수 있다: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "string 객체들을 추가할 수 있다.\n";
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
//	cout << str1 << " 문자열에는 "
//		<< len1 << "개의 문자가 들어 있다.\n";
//	cout << charr1 << " 문자열에는 "
//		<< len2 << "개의 문자가 들어 있다.\n";
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
//	cout << "p3[1]은 " << p3[1] << "입니다.\n";
//	p3 = p3 + 1;
//	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
//	cout << "이제는 p3[2]이 " << p3[2] << "이고, ";
//	cout << "p3[1]이 " << p3[1] << "입니다.\n";
//	p3 = p3 - 1;
//	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
//	cout << "이제는 p3[1]이 " << p3[1] << "이고, ";
//	cout << "이제는 p3[2]이 " << p3[2] << "이고, ";
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
//	cout << "pw 포인터에 1을 더함:\n";
//	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
//
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps 포인터에 1을 더함:\n";
//	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
//
//	cout << "배열 표기로 두 원소에 접근\n";
//	cout << "stacks[0] = " << stacks[0]
//		<< ", stacks[1] = " << stacks[1] << endl;
//
//	cout << "포인터 표기로 두 원소에 접근\n";
//	cout << "*stacks = " << *stacks
//		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << sizeof(wages) << " = wages 배열의 크기\n";
//	cout << sizeof(pw) << " = pw 포인터의 크기\n";
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
//	cout << "동물의 종류를 입력하십시오: ";
//	cin >> animal;
//	//cin >> ps;
//
//	ps = animal;
//	cout << ps << "s!\n";
//	cout << "strcpy() 사용 전:\n";
//	cout << (int*)animal << ": " << animal << endl;
//	cout << (int*)ps << ": " << ps << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "strcpy() 사용 후:\n";
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
//	cout << "이름을 입력하십시오: ";
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

	cout << "상표명을 입력하세요: ";
	cin >> name;
	cout << "중량을 입력하세요: ";
	cin >> weight;
	cout << "칼로리를 입력하세요: ";
	cin >> calorie;

	CandyBar* snack = new CandyBar{ name, weight, calorie };
	return snack;
}

void PrintCandyBar(CandyBar* snack, int i)
{
	cout << "CandyBar[" << i << "] 상표명: " << snack->brandName << ", 중량: " << snack->weight << ", 칼로리: " << snack->calorie << endl;
}