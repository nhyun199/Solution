#include <iostream>
using namespace std;

int main()
{
    while (1)
	{
		int n;
		cin >> n;

		if (n == 0)
			return 0;

		int* num = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}

		int i = 0;
		while (i < n)
		{
			if (num[i] == num[i + 1]) {}
			else
				cout << num[i] << ' ';

			i++;
		}
		cout << "$\n";
		delete[] num;
	}
}