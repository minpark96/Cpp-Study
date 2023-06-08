#include <iostream>
#include <string>
#include <cstring>
#include "Account.h"

int main()
{
	using namespace std;
	string name, num;
	cout << "초기 계좌 생성" << endl;
	cout << "예금주: ";
	getline(cin, name);
	cout << "계좌 번호: ";
	getline(cin, num);
	BankAccount ba = BankAccount(name, num);

	while (1)
	{
		int menu;
		double cash;
		cout << "메뉴 선택 (1)계좌 정보 출력 (2)입금 (3)출금 (4) 종료" << endl;
		cout << "> ";
		cin >> menu;
		if (menu == 4)
			break;

		switch (menu)
		{
		case 1:
			ba.show();
			break;
		case 2:
			cout << "금액 > $";
			cin >> cash;
			ba.deposit(cash);
			break;
		case 3:
			cout << "금액 > $";
			cin >> cash;
			ba.withdraw(cash);
			break;
		}
	}

	return 0;
}