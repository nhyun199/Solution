#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int C;
	cin >> C;
	cout << fixed << setprecision(3);

	for (int i = 0; i < C; i++)
	{
		int N;
		int sum = 0;
		double average = 0;
		int up = 0;
		cin >> N;
		vector<int> score(N);

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		
		average = sum / N;

		for (int k = 0; k < N; k++)
		{
			if (score[k] > average)
				up++;
		}

		cout << up / (double)N * 100 << "%\n";
	}
}