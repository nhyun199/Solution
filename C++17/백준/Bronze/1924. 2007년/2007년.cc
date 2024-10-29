#include <iostream>
using namespace std;

int main()
{
    int month[13] = 
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int mon, day;
	cin >> mon >> day;
	int result = 0;
	
	for (int i = 0; i < mon; i++)
	{
		result += month[i];
	}

	result = (result + day) % 7;

	switch (result)
	{
    case 0:
        cout << "SUN";
        break;
	case 1: 
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	}
}