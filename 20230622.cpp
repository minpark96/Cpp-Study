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
//		std::cout << "��ü�� �����Ǿ����ϴ�!\n";
//	}
//	~Report() { std::cout << "��ü�� �����Ǿ����ϴ�!\n"; }
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
//	cout << "ũ��:\n";
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
//	cout << NUM << "���� å ����� å ���(0-10)�� �Է��Ͻʽÿ�.\n";
//	int i;
//	for (i = 0; i < NUM; i++)
//	{
//		cout << i + 1 << "�� å�� ������ �Է��Ͻʽÿ�: ";
//		getline(cin, titles[i]);
//		cout << i + 1 << "�� å�� ���(0-10)�� �Է��Ͻʽÿ�: ";
//		cin >> ratings[i];
//		cin.get();
//	}
//	cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�:\n"
//		<< "���\t����\n";
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
//		cout << "�����մϴ�. ����� ������ ���� "
//			<< books.size() << "���� å ����� �Է��ϼ̽��ϴ�.\n"
//			<< "���\t����\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end());
//		cout << "å ������ �������� ����:\n���\t����\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end(), worseThan);
//		cout << "å ����� �������� ����:\n���\t����\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		random_shuffle(books.begin(), books.end());
//		cout << "������ ������ �ٽ� ��ġ:\n���\t����\n";
//		for_each(books.begin(), books.end(), ShowReview);
//	}
//	else
//		cout << "���α׷��� �����մϴ�.\n";
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
//	std::cout << "å ������ �Է��Ͻʽÿ�(�������� quit): ";
//	std::getline(std::cin, rr.title);
//	if (rr.title == "quit")
//		return false;
//	std::cout << "å ���(0-10)�� �Է��Ͻʽÿ�: ";
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
//	cout << "����Ʈ one: ";
//	for_each(one.begin(), one.end(), outint);
//	cout << endl << "����Ʈ two: ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "����Ʈ three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.remove(2);
//	cout << endl << "����Ʈ three���� 2���� ����: ";
//	for_each(three.begin(), three.end(), outint);
//	three.splice(three.begin(), one);
//	cout << endl << "���� ���� ����Ʈ three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "����Ʈ one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "����ȭ ���� ����Ʈ three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();
//	cout << endl << "���İ� ����ȭ ���� ����Ʈ three: ";
//	for_each(three.begin(), three.end(), outint);
//	two.sort();
//	three.merge(two);
//	cout << endl << "���ĵ� ����Ʈ two�� ����Ʈ three�� �պ�: ";
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
//	cout << "���� A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "���� B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A�� B�� ������:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A�� B�� ������:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "A�� B�� ������:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	set<string> C;
//	cout << "���� C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), 
//		insert_iterator<set<string>>(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "������ ���� ���� C:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "Ư���� ������ ǥ��:\n";
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

	codes.insert(Pair(415, "�������ý���"));
	codes.insert(Pair(510, "��Ŭ����"));
	codes.insert(Pair(718, "���Ŭ��"));
	codes.insert(Pair(718, "����ư ��"));
	codes.insert(Pair(415, "�����Ŀ�"));
	codes.insert(Pair(510, "��Ŭ��"));

	cout << "���� �ڵ尡 415�� ���� ��: "
		<< codes.count(415) << endl;
	cout << "���� �ڵ尡 718�� ���� ��: "
		<< codes.count(718) << endl;
	cout << "���� �ڵ尡 510�� ���� ��: "
		<< codes.count(510) << endl;
	cout << "���� �ڵ� ����\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << " " << (*it).first << " "
		<< (*it).second << endl;

	pair<MapCode::iterator, MapCode::iterator> range
		= codes.equal_range(718);
	cout << "���� �ڵ尡 718�� ���õ�:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;

	return 0;
}

