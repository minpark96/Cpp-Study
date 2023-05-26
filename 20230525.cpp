//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	
//	int carrots;
//
//	cout << "당근을 몇 개나 가지고 있니?" << endl;
//	cin >> carrots;
//	cout << "여기 두 개가 더 있다. ";
//	carrots = carrots + 2;
//	cout << "이제 당근은 모두 " << carrots << "개이다." << endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	char ch = 'M';
//	int i = ch;
//	cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;
//
//	cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;
//
//	cout << "cout.put(ch)를 사용하여 char형 변수 ch를 화면에 출력: ";
//	cout.put(ch);
//
//	cout.put('!');
//
//	cout << endl << "종료" << endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout << "키를 입력하세요: ___cm\b\b\b\b\b";
//	int height;
//	cin >> height;
//	cout << endl;
//	const int meter = height / 100;
//	const int centimeter = height % 100;
//
//	cout << "키는 " << meter << "m " << centimeter << "cm 입니다!" << endl;
//
//	return 0;
//}

#include <iostream>

//// 3번
//int main()
//{
//	using namespace std;
//
//	cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
//	cout << "먼저, 도각을 입력하시오: ";
//	int degree;
//	cin >> degree;
//	cout << "다음에, 분각을 입력하시오: ";
//	int min;
//	cin >> min;
//	cout << "끝으로, 초각을 입력하시오: ";
//	int sec;
//	cin >> sec;
//
//	const double latitude = (double) degree + min / 60.0 + sec / 60.0 / 60.0;
//
//	cout << degree << "도, " << min << "분, " << sec << "초 = " << latitude << "도" << endl;
//
//	return 0;
//}

//// 5번
//int main()
//{
//	using namespace std;
//	cout << "세계 인구수를 입력하시오: ";
//	long long worldPop;
//	cin >> worldPop;
//	cout << "미국의 인구수를 입력하시오: ";
//	long long targetPop;
//	cin >> targetPop;
//
//	const double proportion = (double)targetPop / (double)worldPop * 100.0;
//	cout << "세계 인구수에서 미국이 차지하는 비중은 " << proportion << "%이다." << endl;
//
//	return 0;
//}

// 7번
int main()
{
	using namespace std;
	cout << "휘발유 소비량(유럽 스타일)을 입력하시오:     liters/100km\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	double liters;
	cin >> liters;

	const double miles = 62.14;
	const double gallons = liters / 3.875;
	const double mpg = miles / gallons;
	cout << "미쿡 스타일: " << mpg << "mpg" << endl;

	return 0;
}