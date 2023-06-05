//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//struct Rectangle
//{
//	double x0, y0, width, height;
//	double xLeft, yUp, xRight, yDown;
//};
//
//int CheckClash(Rectangle* rec1, Rectangle* rec2);
//
//int main()
//{
//	Rectangle* rec1 = new Rectangle;
//	Rectangle* rec2 = new Rectangle;
//
//	cout << "첫 번째 사각형 x, y, width, height : ";
//	cin >> rec1->x0 >> rec1->y0 >> rec1->width >> rec1->height;
//	cout << "두 번째 사각형 x, y, width, height : ";
//	cin >> rec2->x0 >> rec2->y0 >> rec2->width >> rec2->height;
//
//	rec1->xLeft = rec1->x0 - rec1->width / 2;
//	rec1->yDown = rec1->y0 - rec1->height / 2;
//	rec2->xLeft = rec2->x0 - rec2->width / 2;
//	rec2->yDown = rec2->y0 - rec2->height / 2;
//	rec1->xRight = rec1->x0 + rec1->width / 2;
//	rec1->yUp = rec1->y0 + rec1->height / 2;
//	rec2->xRight = rec2->x0 + rec2->width / 2;
//	rec2->yUp = rec2->y0 + rec2->height / 2;
//
//	switch (CheckClash(rec1, rec2))
//	{
//	case 1:
//		cout << "두 번째 사각형은 첫 번째 사각형 안에 있습니다." << endl;
//		break;
//	case 2:
//		cout << "첫 번째 사각형은 두 번째 사각형 안에 있습니다." << endl;
//		break;
//	case 3:
//		cout << "두 사각형은 겹칩니다." << endl;
//		break;
//	default:
//		cout << "두 사각형은 겹치지 않습니다." << endl;
//		break;
//	}
//
//	delete rec1;
//	delete rec2;
//
//	return 0;
//}
//
//int CheckClash(Rectangle* rec1, Rectangle* rec2)
//{
//	// Rec1이 Rec2 왼쪽에 있음
//	if (rec1->xLeft < rec2->xLeft && rec1->xRight < rec2->xLeft)
//		return 0;
//	// Rec2이 Rec1 왼쪽에 있음
//	else if (rec2->xLeft < rec1->xLeft && rec2->xRight < rec1->xLeft)
//		return 0;
//	// Rec1이 Rec2 위쪽에 있음
//	else if (rec1->yUp > rec2->yUp && rec1->yDown > rec2->yUp)
//		return 0;
//	// Rec2이 Rec1 위쪽에 있음
//	else if (rec2->yUp > rec1->yUp && rec2->yDown > rec1->yUp)
//		return 0;
//	// Rec2이 Rec1 안쪽에 있음 
//	else if (rec1->xLeft <= rec2->xLeft && rec1->xRight >= rec2->xRight
//		&& rec1->yDown <= rec2->yDown && rec1->yUp >= rec2->yUp)
//		return 1;
//	// Rec1이 Rec2 안쪽에 있음 
//	else if (rec2->xLeft <= rec1->xLeft && rec2->xRight >= rec1->xRight
//		&& rec2->yDown <= rec1->yDown && rec2->yUp >= rec1->yUp)
//		return 2;
//	// 겹침
//	else
//		return 3;
//}

//#include <iostream>
//#include <new>
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//int main()
//{
//	using namespace std;
//
//	double* pd1, * pd2;
//	int i;
//	cout << "new와 위치 지정 new의 첫 번째 호출:\n";
//	pd1 = new double[N];
//	pd2 = new (buffer) double[N];
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	cout << "메모리 주소:\n" << pd1 << " : 힙;    "
//		<< (void*)buffer << " : 정적" << endl;
//	cout << "메모리 내용:\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "에 " << pd1[i] << ";  ";
//		cout << &pd2[i] << "에 " << pd2[i] << endl;
//	}
//
//	cout << "\nnew와 위치 지정 new의 두 번째 호출:\n";
//	double* pd3, * pd4;
//	pd3 = new double[N];
//	pd4 = new (buffer) double[N];
//	for (i = 0; i < N; i++)
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	cout << "메모리 내용:\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd3[i] << "에 " << pd3[i] << ";  ";
//		cout << &pd4[i] << "에 " << pd4[i] << endl;
//	}
//
//	cout << "\nnew와 위치 지정 new의 세 번째 호출:\n";
//	delete[] pd1;
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	cout << "메모리 내용:\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "에 " << pd1[i] << ";  ";
//		cout << &pd2[i] << "에 " << pd2[i] << endl;
//	}
//	delete[] pd1;
//	delete[] pd3;
//	return 0;
//}

#include <iostream>
#include <cmath>

struct Circle
{
	double x0, y0, radius;
};

using namespace std;

void CheckClash(Circle* cir1, Circle* cir2);

int main()
{
	Circle* cir1 = new Circle;
	Circle* cir2 = new Circle;

	cout << "첫 번째 원 x, y, r : ";
	cin >> cir1->x0 >> cir1->y0 >> cir1->radius;
	cout << "두 번째 원 x, y, r : ";
	cin >> cir2->x0 >> cir2->y0 >> cir2->radius;

	CheckClash(cir1, cir2);

	delete cir1;
	delete cir2;

	return 0;
}

void CheckClash(Circle* cir1, Circle* cir2)
{
	const double distance = sqrt(pow(cir1->x0 - cir2->x0, 2) + pow(cir1->y0 - cir2->y0, 2));
	if (distance > cir1->radius + cir2->radius)
	{
		// 밖임
		cout << "두 원은 겹치지 않는다." << endl;
	}
	else if (distance <= cir1->radius - cir2->radius)
	{
		// cir1이 더 크고 cir2가 안임
		cout << "두 번째 원은 첫 번째 원의 내부에 있다." << endl;
	}
	else if (distance <= cir2->radius - cir1->radius)
	{
		// cir2이 더 크고 cir1가 안임
		cout << "첫 번째 원은 두 번째 원의 내부에 있다." << endl;
	}
	else
	{
		//겹침
		cout << "두 원은 겹친다." << endl;
	}
}