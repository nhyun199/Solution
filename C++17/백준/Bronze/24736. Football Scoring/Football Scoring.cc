#include <iostream>
using namespace std;

int main()
{
	int T1, F1, S1, P1, C1;
	int T2, F2, S2, P2, C2;
	int sum1;
	int sum2;

	cin >> T1 >> F1 >> S1 >> P1 >> C1;
	cin >> T2 >> F2 >> S2 >> P2 >> C2;

	sum1 = (T1 * 6) + (F1 * 3) + (S1 * 2) + (P1 * 1) + (C1* 2);
	sum2 = (T2 * 6) + (F2 * 3) + (S2 * 2) + (P2 * 1) + (C2 * 2);
	cout << sum1 << ' ' << sum2;    
}