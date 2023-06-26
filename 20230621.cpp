#include <iostream>

int solution(int len, int* ary);
void sort(int* ary, int len);

int main()
{
	int l;
	std::cout << "도로의 전체 길이: ";
	std::cin >> l;
	int* ary = new int[1000];

	std::cout << "최솟값 output: " << solution(l, ary) << std::endl;

	return 0;
}

int solution(int len, int* v)
{
	int diff, rot;
	int size = 0;

	std::cout << "가로등 위치 v(종료 시 -1): ";
	while (1)
	{
		for (int i = 0; i < len + 1; i++)
		{
			std::cin >> rot;
			if (rot < 0)
				break;
			v[i] = rot;
			size++;
		}

		if (size > 0)
			break;
		else
			std::cout << std::endl << "하나 이상을 입력하시오: ";
	}
	
	int* nV = new int[size];

	for (int i = 0; i < size; i++)
		nV[i] = v[i];

	delete[] v;
	int max = 0;

	if (size == 1)
		max = nV[0] - 0 > len - nV[0] ? nV[0] - 0 : len - nV[0];
	else
	{
		sort(nV, size);
		for (int i = 0; i < size; i++)
		{
			if (i == 0)
				diff = nV[0] - 0;
			else if (i == size - 1)
				diff = len - nV[i];
			else
			{
				diff = nV[i + 1] - nV[i];
				if(diff % 2)
					diff++;

				diff /= 2;
			}

			if (diff > max)
				max = diff;
		}
	}
	
	return max;
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