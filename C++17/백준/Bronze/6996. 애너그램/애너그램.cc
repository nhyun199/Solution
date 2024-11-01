#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string A, B;
		cin >> A >> B;

		if (A.size() != B.size())
		{
			cout << A << " & " << B << " are NOT anagrams.\n";
			continue;
		}

		string beforeSortA = A;
		string beforeSortB = B;

		sort(A.begin(), A.end());
		sort(B.begin(), B.end());

		if (A == B)
			cout << beforeSortA << " & " << beforeSortB << " are anagrams.\n";
		else
			cout << beforeSortA << " & " << beforeSortB << " are NOT anagrams.\n";
	}
}