//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		if (i <= num / 2)
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (j == num - 1)
//					cout << "*"; 
//				else if (j == num - i - 1)
//					cout << "*";
//				else if (j < num - i - 1)
//					cout << " ";
//				else
//					cout << "+";
//			}
//		}
//		else
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (j == num - 1)
//					cout << "*";
//				else if (i == j)
//					cout << "*";
//				else if (i > j)
//					cout << " ";
//				else
//					cout << "+";
//			}
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <memory>
//
//class Report
//{
//private:
//	std::string str;
//public:
//	Report(const std::string s) : str(s)
//	{
//		std::cout << "객체가 생성되었습니다!\n";
//	}
//	~Report() { std::cout << "객체가 삭제되었습니다!\n"; }
//	void comment() const { std::cout << str << "\n"; }
//};
//
//int main()
//{
//	{
//		std::auto_ptr<Report> ps(new Report("auto_ptr"));
//		ps->comment();
//	}
//	{
//		std::shared_ptr<Report> ps(new Report("shared_ptr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps(new Report("unique_ptr"));
//		ps->comment();
//	}
//	/*using namespace std;
//	string one("Lottery Winner!");
//	cout << one << endl;
//	string two(20, '$');
//	cout << two << endl;
//	string three(one);
//	cout << three << endl;
//	one += " Oops!";
//	cout << one << endl;
//	two = "Sorry! That was ";
//	three[0] = 'P';
//	string four;
//	four = two + three;
//	cout << four << endl;
//	char alls[] = "All's well that ends well";
//	string five(alls, 20);
//	cout << five << "!\n";
//	string six(alls + 6, alls + 10);
//	cout << six << ", ";
//	string seven(&five[6], &five[10]);
//	cout << seven << "...\n";
//	string eight(four, 7, 16);
//	cout << eight << "in motion!" << endl;*/
//
//	/*using namespace std;
//	string empty;
//	string small = "bit";
//	string larger = "Elephants are a girl's best friend";
//	cout << "크기:\n";
//	cout << "\tempty: " << empty.size() << endl;
//	cout << "\tsmall: " << small.size() << endl;*/
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//const int NUM = 5;
//int main()
//{
//	using std::vector;
//	using std::string;
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	vector<int> ratings(NUM);
//	vector<string> titles(NUM);
//	cout << NUM << "개의 책 제목과 책 등급(0-10)을 입력하십시오.\n";
//	int i;
//	for (i = 0; i < NUM; i++)
//	{
//		cout << i + 1 << "번 책의 제목을 입력하십시오: ";
//		getline(cin, titles[i]);
//		cout << i + 1 << "번 책의 등급(0-10)을 입력하십시오: ";
//		cin >> ratings[i];
//		cin.get();
//	}
//	cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다:\n"
//		<< "등급\t제목\n";
//	for (i = 0; i < NUM; i++)
//	{
//		cout << ratings[i] << "\t" << titles[i] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//struct Review {
//	std::string title;
//	int rating;
//};
//
//bool operator<(const Review& r1, const Review& r2);
//bool worseThan(const Review& r1, const Review& r2);
//bool FillReview(Review& rr);
//void ShowReview(const Review& rr);
//
//int main()
//{
//	using namespace std;
//
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);
//	if (books.size() > 0)
//	{
//		cout << "감사합니다. 당신은 다음과 같이 "
//			<< books.size() << "개의 책 등급을 입력하셨습니다.\n"
//			<< "등급\t제목\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end());
//		cout << "책 제목을 기준으로 정렬:\n등급\t제목\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end(), worseThan);
//		cout << "책 등급을 기준으로 정렬:\n등급\t제목\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		random_shuffle(books.begin(), books.end());
//		cout << "무작위 순서로 다시 배치:\n등급\t제목\n";
//		for_each(books.begin(), books.end(), ShowReview);
//	}
//	else
//		cout << "프로그램을 종료합니다.\n";
//	return 0;
//}
//
//bool operator<(const Review& r1, const Review& r2)
//{
//	if (r1.title < r2.title)
//		return true;
//	else if (r1.title == r2.title && r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}
//bool worseThan(const Review& r1, const Review& r2)
//{
//	if (r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}
//bool FillReview(Review& rr)
//{
//	std::cout << "책 제목을 입력하십시오(끝내려면 quit): ";
//	std::getline(std::cin, rr.title);
//	if (rr.title == "quit")
//		return false;
//	std::cout << "책 등급(0-10)을 입력하십시오: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//		return false;
//	while (std::cin.get() != '\n')
//		continue;
//	return true;
//}
//void ShowReview(const Review& rr)
//{
//	std::cout << rr.rating << "\t" << rr.title << std::endl;
//}

//#include <iostream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//
//void outint(int n) { std::cout << n << " "; }
//
//int main()
//{
//	using namespace std;
//	list<int> one(5, 2);
//	int stuff[5] = { 1, 2, 4, 8, 6 };
//	list<int> two;
//	two.insert(two.begin(), stuff, stuff + 5);
//	int more[6] = { 6, 4, 2, 4, 6, 5 };
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//
//	cout << "리스트 one: ";
//	for_each(one.begin(), one.end(), outint);
//	cout << endl << "리스트 two: ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "리스트 three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.remove(2);
//	cout << endl << "리스트 three에서 2들을 삭제: ";
//	for_each(three.begin(), three.end(), outint);
//	three.splice(three.begin(), one);
//	cout << endl << "접목 후의 리스트 three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "리스트 one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "단일화 후의 리스트 three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();
//	cout << endl << "정렬과 단일화 후의 리스트 three: ";
//	for_each(three.begin(), three.end(), outint);
//	two.sort();
//	three.merge(two);
//	cout << endl << "정렬된 리스트 two를 리스트 three에 합병: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <set>
//#include <algorithm>
//#include <iterator>
//
//int main()
//{
//	using namespace std;
//	const int N = 6;
//	string s1[N] = { "buffoon", "thinkers", "for", "heavy", "can", "for" };
//	string s2[N] = { "metal", "any", "food", "elegant", "deliver", "for" };
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "집합 A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "집합 B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A와 B의 합집합:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A와 B의 교집합:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A와 B의 차집합:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	set<string> C;
//	cout << "집합 C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), 
//		insert_iterator<set<string>>(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "삽입한 후의 집합 C:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "특정한 범위를 표시:\n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
//	cout << endl;
//
//	return 0;
//}

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main()
{
	using namespace std;
	MapCode codes;

	codes.insert(Pair(415, "샌프란시스코"));
	codes.insert(Pair(510, "오클랜드"));
	codes.insert(Pair(718, "브루클린"));
	codes.insert(Pair(718, "스탠튼 섬"));
	codes.insert(Pair(415, "샌라파엘"));
	codes.insert(Pair(510, "버클리"));

	cout << "지역 코드가 415인 도시 수: "
		<< codes.count(415) << endl;
	cout << "지역 코드가 718인 도시 수: "
		<< codes.count(718) << endl;
	cout << "지역 코드가 510인 도시 수: "
		<< codes.count(510) << endl;
	cout << "지역 코드 도시\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << " " << (*it).first << " "
		<< (*it).second << endl;

	pair<MapCode::iterator, MapCode::iterator> range
		= codes.equal_range(718);
	cout << "지역 코드가 718인 도시들:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;

	return 0;
}

