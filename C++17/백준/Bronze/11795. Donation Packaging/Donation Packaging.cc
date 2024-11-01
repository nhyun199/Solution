#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
	cin >> T;
	int totalA = 0;
	int totalB = 0;
	int totalC = 0;
	int setA, setB, setC;
	
	for (int i = 0; i < T; i++)
	{
		cin >> setA >> setB >> setC;
		totalA += setA;
		totalB += setB;
		totalC += setC;
		int minTotal = min({totalA, totalB, totalC});

		if (totalA >= 30 && totalB >= 30 && totalC >= 30)
		{
			cout << minTotal << '\n';
			totalA -= minTotal;
			totalB -= minTotal;
			totalC -= minTotal;
		}
		else
			cout << "NO\n";
	}
}