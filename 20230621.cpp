#include <iostream>

int solution(int len, int* ary);
void sort(int* ary, int len);

int main()
{
	int l, v;
	std::cout << "도로의 전체 길이: ";
	std::cin >> l;
	int* ary1 = new int[1000];
	int size = 0;

	for (int i = 0; i < l + 1; i++)
	{
		std::cout << "위치 v(종료 시 -1): ";
		std::cin >> v;
		if (v < 0)
			break;
		ary1[i] = v;
		size++;
	}
	int* ary2 = new int[size];

	for (int i = 0; i < size; i++)
	{
		ary2[i] = ary1[i];
	}
	delete[] ary1;

	sort(ary2, size);
	//std::cout << "최솟값: " << solution(l, ary2) << std::endl;

	delete[] ary2;

	return 0;
}

int solution(int len, int* ary)
{
//	int res;

	



	return 1;
}

void sort(int* ary, int len)
{
	int temp, prev = len - 1, next;
	for (int i = len - 1; i > 0; i--)
	{
		int count = 0;
		for (int j = 0; j < prev; j++)
		{
			if (ary[j + 1] < ary[j])
			{
				temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
				count++;
				next = j;
			}
		}
		if (count == 0)
			break;
		prev = next;
	}
}