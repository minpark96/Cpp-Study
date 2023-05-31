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
//	cout << "자동차 메이커와 차종을 입력하시오: ";
//	cin.getline(automobile, 50);
//	cout << "연식을 입력하시오: ";
//	cin >> year;
//	cout << "구입 가격을 입력하시오: ";
//	cin >> a_price;
//	d_price = 0.193 * a_price;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "메이커와 차종: " << automobile << endl;
//	cout << "연식: " << year << endl;
//	cout << "구입 가격 $" << a_price << endl;
//	cout << "현재 가격 $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "메이커와 차종: " << automobile << endl;
//	outFile << "연식: " << year << endl;
//	outFile << "구입 가격 $" << a_price << endl;
//	outFile << "현재 가격 $" << d_price << endl;
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
//	cout << "데이터 파일의 이름을 입력하시오: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << filename << " 파일을 열 수 없습니다." << endl;
//		cout << "프로그램을 종료합니다.\n";
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
//		cout << "파일 끝에 도달했습니다.\n";
//	else if (inFile.fail())
//		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
//	else
//		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
//	if (count == 0)
//		cout << "데이터가 없습니다.\n";
//	else
//	{
//		cout << "읽은 항목의 개수: " << count << endl;
//		cout << "합계: " << sum << endl;
//		cout << "평균: " << sum / count << endl;
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
		cout << "a. 회원등록" << endl;
		cout << "b. 실명으로 열람" << endl;
		cout << "c. 직함으로 열람" << endl;
		cout << "d. BOP 아이디로 열람" << endl;
		cout << "e. 회원이 지정한 것으로 열람" << endl;
		cout << "q. 종료" << endl;
		cout << "선택 : ";
		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 'a':
			// 파일 입력
			WriteFile();
			break;
		case 'b':
			// 파일 출력 실명
			ReadFile(0);
			break;
		case 'c':
			//파일 출력 직함
			ReadFile(1);
			break;
		case 'd':
			// 파일 출력 BOP 아이디
			ReadFile(2);
			break;
		case 'e':
			// 파일 출력 회원 지정
			ReadFile(3);
			break;
		case 'q':
			// 종료
			cout << "종료합니다!" << endl;
			isQuit = true;
			break;
		default:
			cout << "잘못된 입력 값 입니다!" << endl;
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
	outFile.open(filename, ios::app); // ios::app 파일 이어쓰기
	if (!outFile.is_open())
	{
		cout << filename << " 파일을 열 수 없습니다." << endl;
		return;
	}

	cout << "회원 실명을 입력하시오: ";
	cin.getline(bop.fullname, strsize);
	outFile << bop.fullname << endl;
	cout << "회원 직함을 입력하시오: ";
	cin.getline(bop.title, strsize);
	outFile << bop.title << endl;
	cout << "회원 BOP 아이디를 입력하시오: ";
	cin.getline(bop.bopname, strsize);
	outFile << bop.bopname << endl;
	cout << "원하는 방식을 지정하시오(0 => fullname, 1 => title, 2 => bopname): ";
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
		cout << filename << " 파일을 열 수 없습니다." << endl;
		return;
	}

	do // inFile.good()은 입력에 대한 마지막 읽기 시도에 대해 보고라서 일단 한번 읽어야 함
	{
		++count;
		inFile.getline(bopList[count].fullname, strsize);
		inFile.getline(bopList[count].title, strsize);
		inFile.getline(bopList[count].bopname, strsize);
		inFile >> bopList[count].preference;
		inFile.ignore();
	} while (inFile.good()); // 마지막에 공백 라인 값 한번 읽음;; => count값으로 처리 됨

	if (count == 0)
		cout << "데이터가 없습니다.\n";
	else if (inFile.eof()) // 다 읽었으면
		PrintFile(bopList, count, select); // 출력
	else if (inFile.fail())
		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";

	inFile.close();
}

void PrintFile(Bop* bop, int count, int select) // count: bop배열 크기
{
	switch (select) // 처음 메뉴 선택값 0: b, 1: c, 2: d, 3: e  
	{
	case 0: // 0: 실명
		for (int i = 0; i < count; i++)
		{
			if (strcmp(bop[i].fullname, "") == 0)
				continue;
			cout << bop[i].fullname << endl;
		}
		break;
	case 1: // 1: 직함
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
	case 3: // 3: 회원 지정
		for (int i = 0; i < count; i++)
		{
			switch (bop[i].preference) // 회원 지정 값에 따라 출력
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
