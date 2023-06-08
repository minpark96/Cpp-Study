#include <iostream>
#include <string>
#include <cstring>
#include "Account.h"

int main()
{
	using namespace std;
	string name, num;
	cout << "�ʱ� ���� ����" << endl;
	cout << "������: ";
	getline(cin, name);
	cout << "���� ��ȣ: ";
	getline(cin, num);
	BankAccount ba = BankAccount(name, num);

	while (1)
	{
		int menu;
		double cash;
		cout << "�޴� ���� (1)���� ���� ��� (2)�Ա� (3)��� (4) ����" << endl;
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
			cout << "�ݾ� > $";
			cin >> cash;
			ba.deposit(cash);
			break;
		case 3:
			cout << "�ݾ� > $";
			cin >> cash;
			ba.withdraw(cash);
			break;
		}
	}

	return 0;
}