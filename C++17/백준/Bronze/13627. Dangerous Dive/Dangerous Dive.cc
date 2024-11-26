#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, R;
	int _return;
	vector<int> all;
	cin >> N >> R;

	if (N == R)
	{
		for (int i = 0; i < N; i++)
			cin >> _return;

		cout << "* ";
		return 0;
	}

	for (int i = 0; i < N; i++)
		all.push_back(i + 1);

	for (int i = 0; i < R; i++)
	{
		cin >> _return;
		all[_return - 1] = 0;
	}

	for (int i = 0; i < N; i++)
	{
		if (all[i] != 0)
			cout << all[i] << ' ';
	}    
}