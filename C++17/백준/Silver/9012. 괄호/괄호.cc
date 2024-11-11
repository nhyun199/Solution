#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int T;
	cin >> T;
	string brakets;

	int openCount;
	int closeCount;

	for (int i = 0; i < T; i++)
	{
		cin >> brakets;
		openCount = count(brakets.begin(), brakets.end(), '(');
		closeCount = count(brakets.begin(), brakets.end(), ')');
		bool isVPS = false;

		if (openCount != closeCount)
		{
			cout << "NO\n";
			continue;
		}

		openCount = 0;
		closeCount = 0;

		for (char ch : brakets)
		{
			if (ch == '(')
				openCount++;
			else
				closeCount++;

			if (openCount < closeCount)
			{
				isVPS = false;
				break;
			}
		}

		if (openCount == closeCount)
			isVPS = true;

		if (isVPS)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}