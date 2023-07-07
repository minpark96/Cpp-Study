#include <iostream>
#include "stopwatch.h";

#define MAX_NUM 100
#define MIN_NUM 2

using namespace std;

int* solution(int N, int** relation); 
void search(int* result, bool* isVisit, bool* isVisitD2, int depth, int** graph, int curr, int origin, int N);

int main()
{
	StopWatch sw;
	int num;
	int* ptr;

	cout << "전체 이용자 수: ";
	while (1)
	{
		cin >> num;
		if (num <= MAX_NUM || num >= MIN_NUM)
			break;
		else
			cout << "2이상, 100이하의 수를 입력하세요: ";
	}

	int** relation = new int* [(num * (num - 1)) / 2];

	for (int i = 0; i < (num * (num - 1)) / 2; i++)
	{
		int a, b;
		cout << "친구 관계를 입력하시오(종료 시 -1): ";
		relation[i] = new int[2];
		cin >> a;
		if (a == -1)
		{
			relation[i][0] = a;
			break;
		}

		cin >> b;
		if (a == b)
		{
			cout << "자기 자신과 친구일 수 없습니다~" << endl;
			i--;
			continue;
		}
		relation[i][0] = a;
		relation[i][1] = b;
	}

	sw.start();
	cout << "start: " << sw.getStartTime() << "ms" << endl;
	ptr = solution(num, relation);


	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "의 친구수: " << ptr[i] << endl;
	}
	sw.stop();
	cout << "stop: " << sw.getEndTime() << "ms" << endl;
	cout << "걸린 시간: " << sw.getElapsedTime() << "ms" << endl;

	for (int i = 0; i < (num * (num - 1)) / 2; i++)
	{
		if (relation[i][0] == -1)
		{
			delete[] relation[i];
			break;
		}
		delete[] relation[i];
	}
	delete[] relation;
	delete ptr;

	return 0;
}

int* solution(int N, int** relation)
{
	int* result = new int[N] {0};
	bool* isVisit = new bool[N] {false};
	bool* isVisitD2 = new bool[N] {false};
	int** graph = new int* [N] {0};

	for (int i = 0; i < N; i++)
	{
		graph[i] = new int[N] {0};
	}

	for (int i = 0; i < (N * (N - 1)) / 2; i++)
	{
		if (relation[i][0] == -1) break;
		graph[relation[i][0] - 1][relation[i][1] - 1] = 1;
		graph[relation[i][1] - 1][relation[i][0] - 1] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		search(result, isVisit, isVisitD2, 0, graph, i, i, N);
	}

	for (int i = 0; i < N; i++)
	{
		delete[] graph[i];
	}
	delete[] graph;
	delete[] isVisit;
	delete[] isVisitD2;

	return result;
}

void search(int* result, bool* isVisit, bool* isVisitD2, int depth, int** graph, int curr, int origin, int N)
{
	if (depth == 0)
	{
		memset(isVisit, false, N);
		memset(isVisitD2, false, N);
		isVisit[curr] = true;
	}
	else
	{
		if (isVisitD2[curr] == false) result[origin]++;
		isVisit[curr] = true;
	}
	
	for (int i = 0; i < N; i++)
	{
		if (graph[curr][i] == 1 && isVisit[i] == false)
		{
			if (depth < 1)
			{
				search(result, isVisit, isVisitD2, depth + 1, graph, i, origin, N);
				
			}
			else
			{
				if (isVisitD2[i] == false)
				{
					result[origin]++;
					isVisitD2[i] = true;
				}
			}
		}
	}
}