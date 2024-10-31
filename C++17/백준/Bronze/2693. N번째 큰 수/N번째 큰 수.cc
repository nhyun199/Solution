#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<int> A(10);
		int count = 0;

		for (int j = 0; j < 10; j++)
		{
			cin >> A[j];
		}

		sort(A.begin(), A.end(), greater<>());

		for (int k = 0; k < 10; k++)
		{
			if (A[k] > A[k + 1])
				count++;

			if (count == 2)
			{
				cout << A[k + 1] << '\n';
				break;
			}
		}
	}
}