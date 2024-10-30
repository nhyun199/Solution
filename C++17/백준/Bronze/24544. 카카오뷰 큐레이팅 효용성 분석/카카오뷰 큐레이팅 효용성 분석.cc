#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
	cin >> N;
	vector<int> interest(N);
	vector<int> isRegistered(N);
	int totalInterest = 0;
	int totalUnregistered = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> interest[i];
		totalInterest += interest[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> isRegistered[i];

		if (!isRegistered[i])
			totalUnregistered += interest[i];
	}
	cout << totalInterest << '\n' << totalUnregistered;
}