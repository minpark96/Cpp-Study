#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string sFileName;
	string dFileName;
	ifstream sFile;
	ofstream dFile;
	int num = 32;
	char ch;

	// Q1
	cout << "Input source filename : ";
	getline(cin, sFileName);
	sFile.open(sFileName, ios_base::in);
	if (!sFile.is_open())
	{
		cerr << sFileName << " ������ �дٰ� ���� �߻�." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Input encoding filename : ";
	getline(cin, dFileName);
	dFile.open(dFileName, ios_base::out | ios_base::app);
	if (!dFile.is_open())
	{
		cerr << dFileName << " ������ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "��ȣȭ ����: " << num << endl;
	dFile.write((char*)&num, sizeof num);

	while (sFile.read((char*)&ch, sizeof ch))
	{
		ch += num;
		dFile.write((char*)&ch, sizeof ch);
	}

	dFile.close();
	sFile.close();
	cout << "Done." << endl;

	// Q2
	cout << "Input source filename : ";
	getline(cin, sFileName);
	sFile.open(sFileName, ios_base::in);
	if (!sFile.is_open())
	{
		cerr << sFileName << " ������ �дٰ� ���� �߻�." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Input decoding filename : ";
	getline(cin, dFileName);
	dFile.open(dFileName, ios_base::out | ios_base::app);
	if (!dFile.is_open())
	{
		cerr << dFileName << " ������ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
	}

	sFile.read((char*)&num, sizeof num);
	cout << "��ȣȭ ����: " << num << endl;

	while (sFile.read((char*)&ch, sizeof ch))
	{
		ch -= num;
		dFile.write((char*)&ch, sizeof ch);
	}

	dFile.close();
	sFile.close();
	cout << "Done." << endl;

	return 0;
}

//int main()
//{
//	string sFileName;
//	string dFileName;
//	ifstream sFile;
//	int num;
//	char ch;
//
//	cout << "Input source filename : ";
//	getline(cin, sFileName);
//	sFile.open(sFileName, ios_base::in);
//	if (!sFile.is_open())
//	{
//		cerr << sFileName << " ������ �дٰ� ���� �߻�." << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Input decoding filename : ";
//	getline(cin, dFileName);
//	ofstream dFile(dFileName, ios_base::out | ios_base::app);
//	if (!dFile.is_open())
//	{
//		cerr << dFileName << " ������ �� �� �����ϴ�." << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	sFile.read((char*)&num, sizeof num);
//	cout << num;
//
//	while (sFile.read((char*)&ch, sizeof ch))
//	{
//		ch -= num;
//		dFile.write((char*)&ch, sizeof ch);
//	}
//
//	dFile.close();
//	sFile.close();
//	cout << "Done." << endl;
//
//	return 0;
//}