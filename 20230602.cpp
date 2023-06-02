//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//struct Circle
//{
//	double radius, x0, y0;
//};
//
//struct Point
//{
//	double x, y;
//};
//
//void CheckInCircle(Circle* circle, Point* point);
//
//int main()
//{
//	Circle* circle = new Circle;
//	Point* point = new Point;
//
//	cout << "input > r : ";
//	cin >> circle->radius;
//	cout << "x0 : ";
//	cin >> circle->x0;
//	cout << "y0 : ";
//	cin >> circle->y0;
//	cout << "x : ";
//	cin >> point->x;
//	cout << "y : ";
//	cin >> point->y;
//
//	CheckInCircle(circle, point);
//
//	delete circle;
//	delete point;
//
//	return 0;
//}
//
//void CheckInCircle(Circle* circle, Point* point)
//{
//	const double distance = sqrt(pow(point->x - circle->x0, 2) + pow(point->y - circle->y0, 2));
//
//	cout << "output > 점(" << point->x << ", " << point->y
//		<< ")는 중점이 (" << circle->x0 << ", " << circle->y0
//		<< ")이고 반지름이 " << circle->radius << "인 원 안에 ";
//	if (distance < circle->radius)
//		cout << "있습니다." << endl;
//	else
//		cout << "없습니다." << endl;
//}

//#include <iostream>
//#include <cmath>
//
//struct Point
//{
//	double x, y;
//};
//
//struct Line
//{
//	double a, b, c;
//};
//
//void SetLine(Point* point, Line* line);
//void Cramer(Line* line);
//
//using namespace std;
//
//int main()
//{
//	Point* point = new Point[4];
//	Line* line = new Line[2];
//
//	cout << "점 4개 입력 : x1, y1, x2, y2, x3, y3, x4, y4" << endl << "> ";
//	for (int i = 0; i < 4; i++)
//		cin >> point[i].x >> point[i].y;
//	
//	SetLine(point, line);
//	Cramer(line);
//
//	delete[] point;
//	delete[] line;
//
//	return 0;
//}
//
//void SetLine(Point* point, Line* line)
//{
//	if (point[0].x != point[1].x)
//	{
//		if (point[0].y == point[1].y)
//		{
//			line[0].a = 0;
//			line[0].b = 1;
//			line[0].c = point[0].y;
//		}
//		else
//		{
//			line[0].a = (point[1].y - point[0].y) / (point[1].x - point[0].x);
//			line[0].b = 1;
//			line[0].c = line[0].a * -1 * point[0].x + point[0].y;
//		}
//	}
//	else
//	{
//		if (point[0].y == point[1].y)
//		{
//			line[0].a = 0;
//			line[0].b = 0;
//			line[0].c = 0;
//		}
//		else
//		{
//			line[0].a = 1;
//			line[0].b = 0;
//			line[0].c = point[0].x;
//		}
//	}
//
//	if (point[2].x != point[3].x)
//	{
//		if (point[2].y == point[3].y)
//		{
//			line[1].a = 0;
//			line[1].b = 1;
//			line[1].c = point[2].y;
//		}
//		else
//		{
//			line[1].a = (point[3].y - point[2].y) / (point[3].x - point[2].x);
//			line[1].b = 1;
//			line[1].c = line[1].a * -1 * point[2].x + point[2].y;
//		}
//	}
//	else
//	{
//		if (point[2].y == point[3].y)
//		{
//			line[1].a = 0;
//			line[1].b = 0;
//			line[1].c = 0;
//		}
//		else
//		{
//			line[1].a = 1;
//			line[1].b = 0;
//			line[1].c = point[2].x;
//		}
//	}
//}
//
//void Cramer(Line* line)
//{
//	if (-1 * line[0].a * line[1].b == line[0].b * -1 * line[1].a)
//		cout << ">> 두 직선은 평행이다." << endl;
//	else
//	{
//		Point point;
//		point.x = (line[0].c * line[1].b - line[0].b * line[1].c) / 
//			(-1 * line[0].a * line[1].b - line[0].b * -1 * line[1].a);
//		point.y = (-1 * line[0].a * line[1].c - line[0].c * -1 * line[1].a) /
//			(-1 * line[0].a * line[1].b - line[0].b * -1 * line[1].a);
//		cout << ">> 교차점은 (" << point.x << ", " << point.y << ")이다." << endl;
//	}
//}

//#include <iostream>
//int main()
//{
//	using namespace std;
//	int rats = 101;
//	int& rodents = rats;
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats의 주소 = " << &rats;
//	cout << ", rodents의 주소 = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;
//	cout << "bunnies = " << bunnies;
//	cout << ", rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies의 주소 = " << &bunnies;
//	cout << ", rodents의 주소 = " << &rodents << endl;
//	return 0;
//}

//#include <iostream>
//void swapr(int& a, int& b);
//void swapp(int* p, int* q);
//void swapv(int a, int b);
//
//int main()
//{
//	using namespace std;
//	int wallet1 = 3000;
//	int wallet2 = 3500;
//
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑 2 = " << wallet2 << "원\n";
//
//	cout << "참조를 이용하여 내용들을 교환:\n";
//	swapr(wallet1, wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑 2 = " << wallet2 << "원\n";
//
//	cout << "포인터를 이용하여 내용들을 다시 교환:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑 2 = " << wallet2 << "원\n";
//
//	cout << "값으로 전달하여 내용 교환 시도:\n";
//	swapv(wallet1, wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑 2 = " << wallet2 << "원\n";
//	return 0;
//}
//
//void swapr(int& a, int& b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int* p, int* q)
//{
//	int temp;
//
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//void swapv(int a, int b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}

//#include <iostream>
//#include <string>
//struct free_throws
//{
//	std::string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void display(const free_throws& ft);
//void set_pc(free_throws& ft);
//free_throws& accumulate(free_throws& target, const free_throws& source);
//
//int main() 
//{
//	free_throws one = { "Ifelsa Branch", 13, 14 };
//	free_throws two = { "Andor Knott", 10, 16 };
//	free_throws three = { "Minnie Max", 7, 9 };
//	free_throws four = { "Whily Looper", 5, 9 };
//	free_throws five = { "Long Long", 6, 14 };
//	free_throws team = { "Throwgoods", 0, 0 };
//
//	free_throws dup;
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//
//	dup = accumulate(team, five);
//	std::cout << "team 출력:\n";
//	display(team);
//	std::cout << "대입 이후 dup 출력:\n";
//	display(dup);
//	set_pc(four);
//
//	accumulate(dup, five) = four;
//	std::cout << "문제 소지가 있는 대입 이후 dup 출력:\n";
//	display(dup);
//	return 0;
//}
//
//void display(const free_throws& ft)
//{
//	using std::cout;
//	cout << "Name: " << ft.name << '\n';
//	cout << "Made: " << ft.made << '\t';
//	cout << "Attempts: " << ft.attempts << '\t';
//	cout << "Petcnet: " << ft.percent << '\n';
//}
//
//void set_pc(free_throws& ft)
//{
//	if (ft.attempts != 0)
//		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//
//free_throws& accumulate(free_throws& target, const free_throws& source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string vesion1(const string& s1, const string& s2);
//const string& string vesion2(const string& s1, const string& s2);
//const string& string vesion3(const string& s1, const string& s2);
//
//int main() {
//
//	string input;
//	string copy;
//	string result;
//
//	cout << "문자열을 입력하시오: ";
//	getline(cin, input);
//	copy = input;
//	cout << "입력한 문자열: " << input << endl;
//	result = version1(input, "***");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	result = version2(input, "###");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	cout << "원래 문자열 재설정\n";
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	return 0;
//}
//
//string version1(const string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string& string vesion2(const string& s1, const string& s2)
//{
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
//const string& string vesion3(const string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}

//#include <iostream>
//unsigned long left(unsigned long num, unsigned ct);
//char* left(const char* str, int n = 1);
//
//int main()
//{
//	using namespace std;
//	const char* trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char* temp;
//	for (i = 1; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;
//	}
//	return 0;
//}
//
//unsigned long left(unsigned long num, unsigned ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)
//		return 0;
//	while (n /= 10)
//		digits++;
//	if (digits > ct)
//	{
//		ct = digits - ct;
//		while (ct--)
//			num /= 10;
//		return num;
//	}
//	else
//		return num;
//}
//
//char* left(const char* str, int n)
//{
//	if (n < 0)
//		n = 0;
//	char* p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//		p[i] = str[i];
//	while (i <= n)
//		p[i++] = '\0';
//	return p;
//}

//#include <iostream>
//template <typename T>
//void Swap(T& a, T& b);
//
//template <typename T>
//void Swap(T* a, T* b, int n);
//
//void Show(int a[]);
//const int Lim = 8;
//int main()
//{
//	using namespace std;
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
//	Swap(i, j);
//	cout << "이제 i, j = " << i << ", " << j << ".\n";
//
//	int d1[Lim] = { 0, 7, 0 ,4 ,1, 7, 7, 6 };
//	int d2[Lim] = { 0, 6, 2, 0, 1, 9, 6, 9 };
//	cout << "원본 배열:\n";
//	Show(d1);
//	Show(d2);
//	Swap(d1, d2, Lim);
//	cout << "교환된 배열:\n";
//	Show(d1);
//	Show(d2);
//	return 0;
//}
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//void Swap(T a[], T b[], int n)
//{
//	T temp;
//	for (int i = 0; i < n; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void Show(int a[])
//{
//	using namespace std;
//	cout << a[0] << a[1] << "/";
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++)
//		cout << a[i];
//	cout << endl;
//}

#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
	using namespace std;
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
	Swap(i, j);
	cout << "이제 i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 78060.72, 9 };
	cout << "job 교환 전:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "job 교환 후:\n";
	Show(sue);
	Show(sidney);
	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	using namespace std;
	cout << j.name << ": (" << j.floor << "층에 거주) "
		<< "$" << j.salary << endl;
}