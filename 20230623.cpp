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
//	cout << "������ ����Ʈ:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "����� ����Ʈ:\n";
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
//	cout << "�������� ����Ʈ�� ����:\n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << "leng: " << la.size();
//	cout << endl;
//	la.remove(4);
//	cout << "remove() �޼��带 ����� ��:\n";
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << "leng: " << la.size();
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);
//	cout << "remove() �Լ��� ����� ��:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << "leng: " << lb.size();
//	cout << endl;
//	lb.erase(last, lb.end());
//	cout << "erase() �޼��带 ����� ��:\n";
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
//	cout << "���� �ε��� ����:\n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//
//	cout << "���� �ε��� ����:\n";
//	for (i = len; i > 0; i--)
//		cout.write(state2, i) << endl;
//
//	cout << "���ڿ� ���� �ʰ�:\n";
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
//	cout << "���� ����:\n";
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
//	cout << "����(internal) ����:\n";
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
//	cout << "������ ����:\n";
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
//	cout << setw(6) << "N" << setw(14) << "������"
//		<< setw(15) << "��������\n";
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
//	cout << "���� �Է��Ͻʽÿ�: ";
//
//	int sum = 0;
//	int input;
//	while (cin >> input)
//	{
//		sum += input;
//	}
//
//	cout << "���������� �Է��� �� = " << input << endl;
//	cout << "�հ� = " << sum << endl;
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
//	cout << "getline()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
//	cin.getline(input, Limit, '#');
//	cout << "������ ���� �Է��ϼ̽��ϴ�:\n";
//	cout << input << "\n1�ܰ� �Ϸ�\n";
//
//	char ch;
//	cin.get(ch);
//	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�" << endl;
//
//	if (ch != '\n')
//		cin.ignore(Limit, '\n');
//
//	cout << "get()�� ó���� ���ڿ��� �Է��Ͻʽÿ�:\n";
//	cin.get(input, Limit, '#');
//	cout << "������ ���� �Է��ϼ̽��ϴ�:\n";
//	cout << input << "\n2�ܰ� �Ϸ�\n";
//
//	cin.get(ch);
//	cout << "���� �Է� ���ڴ� " << ch << "�Դϴ�" << endl;
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
//	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
//	cin >> filename;
//
//	ofstream fout(filename.c_str());
//
//	fout << "��� ��ȣ ���⿡ �����Ͻʽÿ�.\n";
//	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
//	float secret;
//	cin >> secret;
//	fout << "������ ��� ��ȣ�� " << secret << "�Դϴ�.\n";
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << " ������ ������ ������ �����ϴ�:\n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << "���α׷��� �����մϴ�.\n";
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
//		cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
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
//		cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�): ";
//	cin.get(pl.name, LIM);
//	while (pl.name[0] != '\0')
//	{
//		eatline();
//		cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
//		cin >> pl.population;
//		cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
//		cin >> pl.g;
//		eatline();
//		fout.write((char*)&pl, sizeof pl);
//		cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�): ";
//		cin.get(pl.name, LIM);
//	}
//	fout.close();
//	
//	fin.clear();
//
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
//		while (fin.read((char*)&pl, sizeof pl))
//		{
//			cout << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//	cout << "���α׷��� �����մϴ�.\n";
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
//		cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
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
//			cerr << file << " ������ �дٰ� ���� �߻�.\n";
//			exit(EXIT_FAILURE);
//		}
//	}
//	else
//	{
//		cerr << file << " ������ �� �� �����ϴ�. ����.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ�: ";
//	long rec;
//	cin >> rec;
//	eatline();
//	if (rec < 0 || rec >= ct)
//	{
//		cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
//		exit(EXIT_FAILURE);
//	}
//	streampos place = rec * sizeof pl;
//	finout.seekg(place);
//	if (finout.fail())
//	{
//		cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
//		exit(EXIT_FAILURE);
//	}
//	finout.read((char*)&pl, sizeof pl);
//	cout << "���� ���ڵ��� ����:\n";
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//		<< setprecision(0) << setw(12) << pl.population
//		<< setprecision(2) << setw(6) << pl.g << endl;
//	if (finout.eof())
//		finout.clear();
//
//	cout << "�༺�� �̸��� �Է��Ͻʽÿ�: ";
//	cin.get(pl.name, LIM);
//	eatline();
//	cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
//	cin >> pl.population;
//	cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
//	cin >> pl.g;
//	finout.seekp(place);
//	finout.write((char*)&pl, sizeof pl) << flush;
//	if (finout.fail())
//	{
//		cerr << "���ٰ� ���� �߻�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	ct = 0;
//	finout.seekg(0);
//	cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
//	while (finout.read((char*)&pl, sizeof pl))
//	{
//		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//			<< setprecision(0) << setw(12) << pl.population
//			<< setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//	cout << "���α׷��� �����մϴ�.\n";
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
		cerr << sFileName << " ������ �дٰ� ���� �߻�." << endl;
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
			cerr << dFileName << " ������ �� �� �����ϴ�." << endl;
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
			cerr << sFileName << " ������ �дٰ� ���� �߻�." << endl;
			exit(EXIT_FAILURE);
		}
	}
	cout << "Enter target file : ";
	getline(cin, dFileName);
	ofstream dFile(dFileName, ios_base::out | ios_base::app | ios_base::binary);
	if (!dFile.is_open())
	{
		cerr << dFileName << " ������ �� �� �����ϴ�." << endl;
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