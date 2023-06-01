//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	double x1, x2, x3, y1, y2, y3;
//
//	cout << "세점 입력: ";
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//
//	// 신발끈 공식 https://ladyang86.tistory.com/60
//	const double area = 0.5 * abs((x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1));
//	cout << "삼각형의 면적 : " << area << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <cctype>
//
//#define MIN_LENGTH 8
//#define MIN_DIGITS 2
//
//using namespace std;
//
//int main()
//{
//	while (true)
//	{
//		char ch;
//		int len = 0, digits = 0;
//		bool isValid = true;
//		cout << "비밀번호를 입력하세요(종료하려면 첫글자를 ')' 입력): ";
//		cin.get(ch);
//		if (ch == ')')
//		{
//			cout << "종료~!" << endl;
//			break;
//		}
//
//		while (ch != '\n')
//		{
//			len++;
//			if (isdigit(ch))
//				digits++;
//			else if (isalpha(ch))
//				;
//			else
//			{
//				isValid = false;
//			}
//			cin.get(ch);
//		}
//
//		if (isValid && digits >= MIN_DIGITS && len >= MIN_LENGTH)
//			cout << "Valid password" << endl;
//		else
//			cout << "Invalid password" << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//const int ArSize = 8;
//int sum_arr(const int* begin, const int* end);
//int main()
//{
//	using namespace std;
//	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	int sum = sum_arr(cookies, cookies + ArSize);
//	cout << "먹은 과자 수 합계: " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다\n";
//	return 0;
//}
//
//int sum_arr(const int* begin, const int* end)
//{
//	const int* pt;
//	int total = 0;
//
//	for (pt = begin; pt != end; pt++)
//		total = total + *pt;
//	return total;
//}

//#include <iostream>
//unsigned int c_in_str(const char* str, char ch);
//int main()
//{
//	using namespace std;
//	char mmm[15] = "minimum";
//
//	char* wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "에는 m이 " << ms << "개 들어 있습니다.\n";
//	cout << wail << "에는 u가 " << us << "개 들어 있습니다.\n";
//	return 0;
//}
//
//unsigned int c_in_str(const char* str, char ch)
//{
//	int count = 0;
//
//	while (*str)
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//	return count;
//}

//#include <iostream>
//#include <cmath>
//
//struct polar
//{
//	double distance;
//	double angle;
//};
//
//struct rect
//{
//	double x;
//	double y;
//};
//
//void show_polar(const polar* pda);
//void rect_to_polar(const rect* pxy, polar* pda);
//
//int main()
//{
//	using namespace std;
//	rect rplace;
//	polar pplace;
//
//	cout << "x값과 y값을 입력하십시오: ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력): ";
//	}
//	cout << "프로그램을 종료합니다.\n";
//	return 0;
//}
//
//void show_polar(const polar* pda)
//{
//	using namespace std;
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "거리 = " << pda->distance;
//	cout << ", 각도 = " << pda->angle * Rad_to_deg;
//	cout << "도\n";
//}
//
//void rect_to_polar(const rect* pxy, polar* pda)
//{
//	using namespace std;
//	pda->distance =
//		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}

//#include <iostream>
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char ar[], int low, int high, int level);
//int main()
//{
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len - 2; i++)
//		ruler[i] = ' ';
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	std::cout << 0 << ruler << std::endl;
//	for (i = 1; i <= Divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		std::cout << i << ruler << std::endl;
//		for (int j = 1; j < Len - 2; j++)
//			ruler[j] = ' ';
//	}
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//		return;
//
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}

//#include <iostream>
//
//const double* f1(const double ar[], int n);
//const double* f2(const double [], int);
//const double* f3(const double *, int n);
//
//int main()
//{
//	using namespace std;
//	double av[3] = { 1112.3,1542.6,2227.9 };
//
//	const double* (*p1)(const double*, int) = f1;
//	auto p2 = f2;
//	cout << "함수 포인터:\n";
//	cout << "주소 값\n";
//	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
//	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
//
//	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
//	auto pb = pa;
//	cout << "\n함수 포인터를 원소로 가지는 배열:\n";
//	cout << "주소 값\n";
//	for (int i = 0; i < 3; i++)
//		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
//	cout << "\n함수 포인터를 가리키는 포인터:\n";
//	cout << "주소 값\n";
//	for (int i = 0; i < 3; i++)
//		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
//
//	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터:\n";
//	cout << "주소 값\n";
//	auto pc = &pa;
//	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
//	const double *(*(*pd)[3])(const double*, int) = &pa;
//	const double* pdb = (*pd)[1](av, 3);
//	cout << pdb << ": " << *pdb << endl;
//	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
//	return 0;
//}
//
//const double* f1(const double* ar, int n)
//{
//	return ar;
//}
//
//const double* f2(const double ar[], int n)
//{
//	return ar + 1;
//}
//
//const double* f3(const double ar[], int n)
//{
//	return ar + 2;
//}

#include <iostream>

double calculate(double, double, double (*pf)(double, double));
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
	using namespace std;

	double x, y;
	double (*pf[4])(double, double) = { add, sub, mul, div };

	while (true)
	{
		cout << "x, y를 입력: ";
		cin >> x >> y;

		for (int i = 0; i < 4; i++)
		{
			double q = calculate(x, y, pf[i]);
			cout << "calculate(x, y, ";
			switch (i)
			{
			case 0:
				cout << "add): " << q << endl;
				break;
			case 1:
				cout << "sub): " << q << endl;
				break;
			case 2:
				cout << "mul): " << q << endl;
				break;
			case 3:
				cout << "div): " << q << endl;
				break;
			}
		}
	}

	return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return pf(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mul(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}


