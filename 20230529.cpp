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

//// 7번
//int main()
//{
//	Pizza pizza;
//
//	cout << "피자 회사의 이름을 입력하시오: ";
//	getline(cin, pizza.name);
//	cout << "피자의 지름을 입력하시오: ";
//	cin >> pizza.diameter;
//	cout << "피자의 중량을 입력하시오: ";
//	cin >> pizza.weight;
//
//	cout << "피자 회사의 이름: " << pizza.name << endl;
//	cout << "피자의 지름: " << pizza.diameter << endl;
//	cout << "피자의 중량: " << pizza.weight << endl;
//
//	return 0;
//}

//// 8번
//int main()
//{
//	Pizza* pizza = new Pizza;
//
//	cout << "피자의 지름을 입력하시오: ";
//	cin >> pizza->diameter;
//	cin.ignore();
//	cout << "피자 회사의 이름을 입력하시오: ";
//	getline(cin, pizza->name);
//	cout << "피자의 중량을 입력하시오: ";
//	cin >> pizza->weight;
//
//	cout << "피자 회사의 이름: " << pizza->name << endl;
//	cout << "피자의 지름: " << pizza->diameter << endl;
//	cout << "피자의 중량: " << pizza->weight << endl;
//
//	delete pizza;
//	return 0;
//}

//int main()
//{
//	int x;
//
//	cout << "대입 표현식 x = 100의 값은 ";
//	cout << (x = 100) << endl;
//	cout << "현재 x의 값은 " << x << endl;
//	cout << "관계 표현식 x < 3의 정수값은 ";
//	cout << (x < 3) << endl;
//	cout << "관계 표현식 x > 3의 정수값은 ";
//	cout << (x > 3) << endl;
//	cout.setf(ios_base::boolalpha);
//	cout << "관계 표현식 x < 3의 bool값은 ";
//	cout << (x < 3) << endl;
//	cout << "관계 표현식 x > 3의 bool값은 ";
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
//		cout << "단어 하나를 입력(quit 입력 시 종료): ";
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
//			cout << word << "는 회문 입니다." << endl;
//		}
//		else
//		{
//			cout << word << "는 회문이 아닙니다." << endl;
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
//	cout << "단어를 하나 입력하십시오: ";
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
//	cout << word << "\n종료.\n";
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
//	cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오:\n";
//	cin >> ch;
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin >> ch;
//	}
//	cout << endl << count << " 문자를 읽었습니다.\n";
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
//	cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오:\n";
//	cin.get(ch);
//	while (ch != '#')
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cout << endl << count << " 문자를 읽었습니다.\n";
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
//		cout << "라인 숫자를 입력 : ";
//		cin >> inputNum;
//
//		if (inputNum < 1 || inputNum > 10)
//			cout << "1~10 사이 정수를 입력하세요!" << endl;
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
//	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
//	cin >> numList;
//
//	car* carList = new car[numList];
//
//	for (int i = 0; i < numList; i++)
//	{
//		cin.ignore();
//		cout << "자동차 #" << i + 1 << " :" << endl;
//		cout << "제작업체: ";
//		cin.get(carList[i].brand, sizeof(carList[i].brand));
//		cout << "제작년도: ";
//		cin >> carList[i].year;
//	}
//
//	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
//	for (int i = 0; i < numList; i++)
//	{
//		cout << carList[i].year << "년형 " << carList[i].brand << endl;
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

	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) :" << endl;
	while (!isDone)
	{
		cin >> word;
		if (strcmp(word, "done") == 0)
			isDone = true;
		else
			count++;
	}

	cout << "총 " << count << " 단어가 입력되었습니다." << endl;
	
	return 0;
}