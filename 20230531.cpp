//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double velocity, acceleration;
//
//	cout << "Speed and Accelation : ";
//	cin >> velocity >> acceleration;
//
//	const double distance = velocity * velocity / (2 * acceleration);
//
//	cout << "Minimum runway length : " << distance << endl;
//
//	return 0;
//}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, x2, y1, y2;

	cout << "(x1, y1) : ";
	cin >> x1 >> y1;
	cout << "(x2, y2) : ";
	cin >> x2 >> y2;

	const double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "Distance : " << distance << endl;

	return 0;
}