//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//struct Pizza
//{
//	string name;
//	double diameter;
//	double weight;
//};

//// 7��
//int main()
//{
//	Pizza pizza;
//
//	cout << "���� ȸ���� �̸��� �Է��Ͻÿ�: ";
//	getline(cin, pizza.name);
//	cout << "������ ������ �Է��Ͻÿ�: ";
//	cin >> pizza.diameter;
//	cout << "������ �߷��� �Է��Ͻÿ�: ";
//	cin >> pizza.weight;
//
//	cout << "���� ȸ���� �̸�: " << pizza.name << endl;
//	cout << "������ ����: " << pizza.diameter << endl;
//	cout << "������ �߷�: " << pizza.weight << endl;
//
//	return 0;
//}

//// 8��
//int main()
//{
//	Pizza* pizza = new Pizza;
//
//	cout << "������ ������ �Է��Ͻÿ�: ";
//	cin >> pizza->diameter;
//	cin.ignore();
//	cout << "���� ȸ���� �̸��� �Է��Ͻÿ�: ";
//	getline(cin, pizza->name);
//	cout << "������ �߷��� �Է��Ͻÿ�: ";
//	cin >> pizza->weight;
//
//	cout << "���� ȸ���� �̸�: " << pizza->name << endl;
//	cout << "������ ����: " << pizza->diameter << endl;
//	cout << "������ �߷�: " << pizza->weight << endl;
//
//	delete pizza;
//	return 0;
//}

//int main()
//{
//	int x;
//
//	cout << "���� ǥ���� x = 100�� ���� ";
//	cout << (x = 100) << endl;
//	cout << "���� x�� ���� " << x << endl;
//	cout << "���� ǥ���� x < 3�� �������� ";
//	cout << (x < 3) << endl;
//	cout << "���� ǥ���� x > 3�� �������� ";
//	cout << (x > 3) << endl;
//	cout.setf(ios_base::boolalpha);
//	cout << "���� ǥ���� x < 3�� bool���� ";
//	cout << (x < 3) << endl;
//	cout << "���� ǥ���� x > 3�� bool���� ";
//	cout << (x > 3) << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	using namespace std;
//	string word;
//	string quit = "quit";
//	
//
//	while (true)
//	{
//		bool isPalindrome = true;
//		cout << "�ܾ� �ϳ��� �Է�(quit �Է� �� ����): ";
//		cin >> word;
//
//		if (word.compare(quit) == 0)
//		{
//			break;
//		}
//
//		for (int i = 0; i < (word.size()) / 2; i++)
//		{
//			if (word[i] != word[word.size() - 1 - i])
//			{
//				isPalindrome = false;
//				break;
//			}
//		}
//
//		if (isPalindrome)
//		{
//			cout << word << "�� ȸ�� �Դϴ�." << endl;
//		}
//		else
//		{
//			cout << word << "�� ȸ���� �ƴմϴ�." << endl;
//		}
//	}
//	
//
//	return 0;
//}

//#include <iostream>
//#include <string>

//int main()
//{
//	using namespace std;
//	cout << "�ܾ �ϳ� �Է��Ͻʽÿ�: ";
//	string word;
//	cin >> word;
//
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << "\n����.\n";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int pr[3] = { 1, 2, 3 };
//
//	for (int a : pr)
//	{
//		cout << a << endl;
//	}
//
//	for (int a : pr)
//	{
//		a +=3;
//	}
//
//	for (int a : pr)
//	{
//		cout << a << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int count = 0;
//	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
//	cin >> ch;
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin >> ch;
//	}
//	cout << endl << count << " ���ڸ� �о����ϴ�.\n";
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int count = 0;
//	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
//	cin.get(ch);
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cout << endl << count << " ���ڸ� �о����ϴ�.\n";
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int inputNum, outputNum;
//
//	do
//	{
//		cout << "���� ���ڸ� �Է� : ";
//		cin >> inputNum;
//
//		if (inputNum < 1 || inputNum > 10)
//			cout << "1~10 ���� ������ �Է��ϼ���!" << endl;
//	} while (inputNum < 1 || inputNum > 10);
//
//	for (int row = 1; row <= inputNum; row++)
//	{
//		outputNum = inputNum;
//		for (int col = 1; col <= inputNum * 2 - 1; col++)
//		{
//			if (outputNum <= row) cout << outputNum;
//			else cout << " ";
//
//			if (col < inputNum) outputNum--;
//			else outputNum++;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//struct car
//{
//	char brand[20];
//	int year;
//};
//
//int main()
//{
//	int numList;
//
//	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
//	cin >> numList;
//
//	car* carList = new car[numList];
//
//	for (int i = 0; i < numList; i++)
//	{
//		cin.ignore();
//		cout << "�ڵ��� #" << i + 1 << " :" << endl;
//		cout << "���۾�ü: ";
//		cin.get(carList[i].brand, sizeof(carList[i].brand));
//		cout << "���۳⵵: ";
//		cin >> carList[i].year;
//	}
//
//	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
//	for (int i = 0; i < numList; i++)
//	{
//		cout << carList[i].year << "���� " << carList[i].brand << endl;
//	}
//
//	delete carList;
//
//	return 0;
//}

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char word[32] = { 0 };
	int count = 0;
	bool isDone = false;

	cout << "���� �ܾ���� �Է��Ͻʽÿ� (�������� done�� �Է�) :" << endl;
	while (!isDone)
	{
		cin >> word;
		if (strcmp(word, "done") == 0)
			isDone = true;
		else
			count++;
	}

	cout << "�� " << count << " �ܾ �ԷµǾ����ϴ�." << endl;
	
	return 0;
}