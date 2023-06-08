//#include <iostream>
//#include <cmath>
//
//#define START 10
//#define END 1000000000
//
//int main()
//{
//	using namespace std;
//	srand(time(NULL));
//	int res, count = START;
//	while (count < END)
//	{
//		if (count > START)
//			cout << "..." << endl;
//		count *= 10;
//		int front = 0, back = 0;
//		for (int i = 0; i < count; i++)
//		{
//			res = rand() % 2;
//			if (res)
//				front++;
//			else
//				back++;
//		}
//		cout << count << "\t번째일 때 .. 앞면 " << front / (double)count * 100.0
//			<< "% 뒷면 " << back / (double)count * 100.0 << "%" << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//#define START 10
//#define END 1000000000
//#define NUM_OF_ITEM 11
//#define PROB_A_STAR 1
//#define PROB_B_STAR 3
//#define PROB_C_STAR 5
//#define PROB_D_STAR 10
//#define PROB_E_STAR 38
//
//struct Item
//{
//	int quantity;
//};
//
//void InitItems(Item* item);
//
//int main()
//{
//	using namespace std;
//	srand(time(NULL));
//	Item item[NUM_OF_ITEM];
//	int res, countTot = START, countCur = START;
//	InitItems(item);
//
//	cout << "등급\t아이템\t확률\t아이템\t확률" << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "5star\tA-Item\t1%" << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "4star\tB-Item\t3%\tC-Item\t3%" << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "3star\tD-Item\t5%\tE-Item\t5%" << endl;
//	cout << "     \tF-Item\t5%" << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "2star\tG-Item\t10%\tH-Item\t10%" << endl;
//	cout << "     \tI-Item\t10%\tJ-Item\t10%" << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "1star\tK-Item\t38%" << endl;
//	cout << "-------------------------------------" << endl;
//
//	int itemPicked[NUM_OF_ITEM] = { 0 };
//	while (countTot < END)
//	{
//		if (countTot == countCur)
//		{
//			countCur = 0;
//			countTot *= 10;
//			cout << "..." << endl;
//			memset(itemPicked, 0, sizeof(itemPicked));
//		}
//
//		for (int i = 0; i < 100; i++)
//		{
//			res = rand() % 100 + 1;
//			if (res <= PROB_E_STAR && item[10].quantity != 0)
//			{
//				itemPicked[10] += 1;
//				item[10].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR && item[9].quantity != 0)
//			{
//				itemPicked[9] += 1;
//				item[9].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 2 && item[8].quantity != 0)
//			{
//				itemPicked[8] += 1;
//				item[8].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 3 && item[7].quantity != 0)
//			{
//				itemPicked[7] += 1;
//				item[7].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 && item[6].quantity != 0)
//			{
//				itemPicked[6] += 1;
//				item[6].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 + PROB_C_STAR && item[5].quantity != 0)
//			{
//				itemPicked[5] += 1;
//				item[5].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 + PROB_C_STAR * 2 && item[4].quantity != 0)
//			{
//				itemPicked[4] += 1;
//				item[4].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 + PROB_C_STAR * 3 && item[3].quantity != 0)
//			{
//				itemPicked[3] += 1;
//				item[3].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 + PROB_C_STAR * 3 + PROB_B_STAR && item[2].quantity != 0)
//			{
//				itemPicked[2] += 1;
//				item[2].quantity -= 1;
//			}
//			else if (res <= PROB_E_STAR + PROB_D_STAR * 4 + PROB_C_STAR * 3 + PROB_B_STAR * 2 && item[1].quantity != 0)
//			{
//				itemPicked[1] += 1;
//				item[1].quantity -= 1;
//			}
//			else if (res <= 100 && item[0].quantity != 0)
//			{
//				itemPicked[0] += 1;
//				item[0].quantity -= 1;
//			}
//			else
//				i--;
//		}
//
//		InitItems(item);
//		countCur += 100;
//
//		if (countTot == countCur)
//		cout << "횟수 ? " << countTot << "\tA:" << itemPicked[0]
//			<< "\t, B:" << itemPicked[1] << "\t, C:" << itemPicked[2]
//			<< "\t, D:" << itemPicked[3] << "\t, E:" << itemPicked[4]
//			<< "\t, F:" << itemPicked[5] << "\t, G:" << itemPicked[6]
//			<< "\t, H:" << itemPicked[7] << "\t, I:" << itemPicked[8]
//			<< "\t, J:" << itemPicked[9] << "\t, K:" << itemPicked[10]
//			<< endl;
//	}
//
//	return 0;
//}
//
//void InitItems(Item* item)
//{
//	item[0].quantity = 1;
//	item[1].quantity = 3;
//	item[2].quantity = 3;
//	item[3].quantity = 5;
//	item[4].quantity = 5;
//	item[5].quantity = 5;
//	item[6].quantity = 10;
//	item[7].quantity = 10;
//	item[8].quantity = 10;
//	item[9].quantity = 10;
//	item[10].quantity = 38;
//}

//#include <iostream>
//#include "Stock.h"
//int main()
//{
//	{
//	using std::cout;
//	cout << "생성자를 사용하여 새로운 객체들을 생성한다.\n";
//	Stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	cout << "stock1을 stock2에 대입한다.\n";
//	stock2 = stock1;
//	cout << "stock1과 stock2를 출력한다.\n";
//	stock1.show();
//	stock2.show();
//
//	cout << "생성자를 사용하여 객체를 재설정한다.\n";
//	stock1 = Stock("Nifty Foods", 10, 50.0);
//	cout << "갱신된 stock1:\n";
//	stock1.show();
//	cout << "프로그램을 종료합니다.\n";
//	}
//	return 0;
//}

#include <iostream>

int main()
{
	bool locker[100] = { false };

	for (int i = 1; i < 101; i++)
		for (int j = i - 1; j < 100; j += i)
			locker[j] = !locker[j];

	std::cout << "열려있는 사물함 번호:";
	for (int i = 0; i < 100; i++)
		if(locker[i]) 
			std::cout << "  " << i + 1;

	std::cout << std::endl;
	return 0;
}