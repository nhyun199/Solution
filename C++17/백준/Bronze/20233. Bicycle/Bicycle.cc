#include <iostream>
using namespace std;

int main()
{
	int a, x, b, y;
	int T;
	cin >> a >> x >> b >> y >> T;

	int day_a = (T - 30) * x;
	int day_b = (T - 45) * y;

	if (day_a < 0)
		day_a = 0;
	if (day_b < 0)
		day_b = 0;

	cout << a + day_a * 21 << ' ' << b + day_b * 21;    
}