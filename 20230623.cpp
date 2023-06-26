//#include <iostream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//
//template<class T>
//class TooBig
//{
//private:
//	T cutoff;
//public:
//	TooBig(const T & t) : cutoff(t) {}
//	bool operator() (const T& v) { return v > cutoff; }
//};
//
//void outint(int n) { std::cout << n << " "; }
//int main()
//{
//	using std::list;
//	using std::cout;
//	using std::endl;
//
//	TooBig<int> f100(100);
//	int vals[10] = { 50,100,90,180,60,210,415,88,188,201 };
//	list<int> yadayada{ vals, vals + 10 };
//	list<int> etcetera{ vals,vals + 10 };
//
//	cout << "원래의 리스트:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "정비된 리스트:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	return 0;
//}

//#include <iostream>
//#include <list>
//#include <algorithm>
//
//void Show(int);
//const int LIM = 10;
//int main()
//{
//	using namespace std;
//	int ar[LIM] = { 4, 5, 4, 2, 2, 3, 4, 8, 1, 4 };
//	list<int> la(ar, ar + LIM);
//	list<int> lb(la);
//	cout << "오리지널 리스트의 내용:\n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << "leng: " << la.size();
//	cout << endl;
//	la.remove(4);
//	cout << "remove() 메서드를 사용한 후:\n";
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << "leng: " << la.size();
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);
//	cout << "remove() 함수를 사용한 후:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << "leng: " << lb.size();
//	cout << endl;
//	lb.erase(last, lb.end());
//	cout << "erase() 메서드를 사용한 후:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << "leng: " << lb.size();
//	cout << endl;
//	return 0;
//}
//
//void Show(int v)
//{
//	std::cout << v << ' ';
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using std::vector;
//vector<int> Lotto(const int& max, const int& size);
//void Show(int v);
//
//int main()
//{
//	vector<int> winners;
//
//	for (int i = 0; i < 10; i++)
//	{
//		winners = Lotto(45, 6);
//		for_each(winners.begin(), winners.end(), Show);
//		std::cout << std::endl;
//	}
//
//	return 0;
//}
//
//vector<int> Lotto(const int& max, const int& size)
//{
//	vector<int> v(max);
//	for (int i = 0; i < max; i++)
//	{
//		v[i] = i + 1;
//	}
//	std::random_shuffle(v.begin(), v.end());
//
//	return vector<int>(v.begin(), v.begin() + size);
//}
//
//void Show(int v)
//{
//	std::cout << v << ' ';
//}

//#include <iostream>
//#include <cstring>
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = std::strlen(state2);
//	cout << "루프 인덱스 증가:\n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//
//	cout << "루프 인덱스 감소:\n";
//	for (i = len; i > 0; i--)
//		cout.write(state2, i) << endl;
//
//	cout << "문자열 길이 초과:\n";
//	cout.write(state2, len + 5) << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	using namespace std;
//
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpos);
//	cout.setf(ios_base::showpoint);
//	cout.precision(3);
//
//	ios_base::fmtflags old = cout.setf(ios_base::scientific,
//		ios_base::floatfield);
//
//	cout << "왼쪽 정렬:\n";
//	long n;
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	
//	cout.setf(old, ios_base::floatfield);
//
//	cout << "내부(internal) 정렬:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "오른쪽 정렬:\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//int main()
//{
//	using namespace std;
//
//	cout << fixed << right;
//
//	cout << setw(6) << "N" << setw(14) << "제곱근"
//		<< setw(15) << "네제곱근\n";
//
//	double root;
//	for (int n = 10; n <= 100; n += 10)
//	{
//		root = sqrt(double(n));
//		cout << setw(6) << setfill('.') << n << setfill(' ')
//			<< setw(12) << setprecision(3) << root
//			<< setw(14) << setprecision(4) << sqrt(root)
//				<< endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	cout << "수를 입력하십시오: ";
//
//	int sum = 0;
//	int input;
//	while (cin >> input)
//	{
//		sum += input;
//	}
//
//	cout << "마지막으로 입력한 값 = " << input << endl;
//	cout << "합계 = " << sum << endl;
//	return 0;
//}

//#include <iostream>
//const int Limit = 255;
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	char input[Limit];
//
//	cout << "getline()이 처리할 문자열을 입력하십시오:\n";
//	cin.getline(input, Limit, '#');
//	cout << "다음과 같이 입력하셨습니다:\n";
//	cout << input << "\n1단계 완료\n";
//
//	char ch;
//	cin.get(ch);
//	cout << "다음 입력 문자는 " << ch << "입니다" << endl;
//
//	if (ch != '\n')
//		cin.ignore(Limit, '\n');
//
//	cout << "get()이 처리할 문자열을 입력하십시오:\n";
//	cin.get(input, Limit, '#');
//	cout << "다음과 같이 입력하셨습니다:\n";
//	cout << input << "\n2단계 완료\n";
//
//	cin.get(ch);
//	cout << "다음 입력 문자는 " << ch << "입니다" << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	string filename;
//
//	cout << "새 파일을 위한 이름을 입력하십시오: ";
//	cin >> filename;
//
//	ofstream fout(filename.c_str());
//
//	fout << "비밀 번호 노출에 주의하십시오.\n";
//	cout << "비밀 번호를 입력하십시오: ";
//	float secret;
//	cin >> secret;
//	fout << "귀하의 비밀 번호는 " << secret << "입니다.\n";
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << " 파일의 내용은 다음과 같습니다:\n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << "프로그램을 종료합니다.\n";
//	fin.close();
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <cstdlib>
//
//const int LIM = 20;
//inline void eatline() { while (std::cin.get() != '\n') continue; }
//struct planet
//{
//	char name[LIM];
//	double population;
//	double g;
//};
//
//const char* file = "planets.dat";

//int main()
//{
//	using namespace std;
//	planet pl;
//	cout << fixed << right;
//
//	ifstream fin;
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
//		while (fin.read((char*)&pl, sizeof pl))
//		{
//			cout << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
//	if (!fout.is_open())
//	{
//		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄 입력): ";
//	cin.get(pl.name, LIM);
//	while (pl.name[0] != '\0')
//	{
//		eatline();
//		cout << "행성의 인구를 입력하십시오: ";
//		cin >> pl.population;
//		cout << "행성의 중력가속도를 입력하십시오: ";
//		cin >> pl.g;
//		eatline();
//		fout.write((char*)&pl, sizeof pl);
//		cout << "행성의 이름을 입력하십시오(끝내려면 빈 줄 입력): ";
//		cin.get(pl.name, LIM);
//	}
//	fout.close();
//	
//	fin.clear();
//
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
//		while (fin.read((char*)&pl, sizeof pl))
//		{
//			cout << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//	cout << "프로그램을 종료합니다.\n";
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	planet pl;
//	cout << fixed;
//
//	fstream finout;
//	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
//	int ct = 0;
//	if (finout.is_open())
//	{
//		finout.seekg(0);
//		cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
//		while (finout.read((char*)&pl, sizeof pl))
//		{
//			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		if (finout.eof())
//			finout.clear();
//		else
//		{
//			cerr << file << " 파일을 읽다가 에러 발생.\n";
//			exit(EXIT_FAILURE);
//		}
//	}
//	else
//	{
//		cerr << file << " 파일을 열 수 없습니다. 종료.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "수정할 레코드 번호를 입력하십시오: ";
//	long rec;
//	cin >> rec;
//	eatline();
//	if (rec < 0 || rec >= ct)
//	{
//		cerr << "잘못된 레코드 번호입니다. 종료.\n";
//		exit(EXIT_FAILURE);
//	}
//	streampos place = rec * sizeof pl;
//	finout.seekg(place);
//	if (finout.fail())
//	{
//		cerr << "레코드를 찾다가 에러 발생.\n";
//		exit(EXIT_FAILURE);
//	}
//	finout.read((char*)&pl, sizeof pl);
//	cout << "현재 레코드의 내용:\n";
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//		<< setprecision(0) << setw(12) << pl.population
//		<< setprecision(2) << setw(6) << pl.g << endl;
//	if (finout.eof())
//		finout.clear();
//
//	cout << "행성의 이름을 입력하십시오: ";
//	cin.get(pl.name, LIM);
//	eatline();
//	cout << "행성의 인구를 입력하십시오: ";
//	cin >> pl.population;
//	cout << "행성의 중력가속도를 입력하십시오: ";
//	cin >> pl.g;
//	finout.seekp(place);
//	finout.write((char*)&pl, sizeof pl) << flush;
//	if (finout.fail())
//	{
//		cerr << "쓰다가 에러 발생.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	ct = 0;
//	finout.seekg(0);
//	cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
//	while (finout.read((char*)&pl, sizeof pl))
//	{
//		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//			<< setprecision(0) << setw(12) << pl.population
//			<< setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//	cout << "프로그램을 종료합니다.\n";
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;
#define BUFFER_SIZE 10240

/*
int main()
{
	string sFileName;
	string dFileName;
	ifstream sFile;
	int fileSize;
	int count = 0;
	char buff[BUFFER_SIZE];

	cout << "Enter file name : ";
	getline(cin, sFileName);
	sFile.open(sFileName, ios_base::in | ios_base::binary);
	if (!sFile.is_open())
	{
		cerr << sFileName << " 파일을 읽다가 에러 발생." << endl;
		exit(EXIT_FAILURE);
	}
	sFile.seekg(0, ios::end);
	int sourceSize = sFile.tellg();
	sFile.seekg(0, ios::beg);

	cout << "Enter file size : ";
	cin >> fileSize;

	if (sourceSize < fileSize)
		fileSize = sourceSize;

	while (sFile.read((char*)&buff, fileSize))
	{	
		if(count < 9)
			dFileName = sFileName + ".0" + to_string(++count);
		else
			dFileName = sFileName + "." + to_string(++count);
		ofstream dFile(dFileName, ios_base::out | ios_base::app | ios_base::binary);
		if (!dFile.is_open())
		{
			cerr << dFileName << " 파일을 열 수 없습니다." << endl;
			exit(EXIT_FAILURE);
		}

		dFile.write((char*)&buff, fileSize);
		cout << "-> file " << dFileName << endl;
		dFile.close();

		sourceSize -= fileSize;
		
		if (sourceSize == 0)
			break;
		else if (sourceSize < fileSize)
			fileSize = sourceSize;
	}

	sFile.close();
	cout << "Split Done." << endl;

	return 0;
}
*/
///*
int main()
{
	string sFileName;
	string dFileName;
	ifstream sFile[20];
	int fileNum;
	char buff[BUFFER_SIZE];
	cout << "Enter file number : ";
	cin >> fileNum;
	cin.ignore();

	for (int i = 0; i < fileNum; i++)
	{
		cout << "Enter source file : ";
		getline(cin, sFileName);
		sFile[i].open(sFileName, ios_base::in | ios_base::binary);
		if (!sFile[i].is_open())
		{
			cerr << sFileName << " 파일을 읽다가 에러 발생." << endl;
			exit(EXIT_FAILURE);
		}
	}
	cout << "Enter target file : ";
	getline(cin, dFileName);
	ofstream dFile(dFileName, ios_base::out | ios_base::app | ios_base::binary);
	if (!dFile.is_open())
	{
		cerr << dFileName << " 파일을 열 수 없습니다." << endl;
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < fileNum; i++)
	{
		sFile[i].seekg(0, ios::end);
		int size = sFile[i].tellg();
		sFile[i].seekg(0, ios::beg);
		while (sFile[i].read((char*)&buff, size))
		{
			dFile.write((char*)&buff, size);
		}
	}

	for (int i = 0; i < fileNum; i++)
	{
		sFile[i].close();
	}
	dFile.close();
	cout << "Combine Done." << endl;

	return 0;
}
//*/