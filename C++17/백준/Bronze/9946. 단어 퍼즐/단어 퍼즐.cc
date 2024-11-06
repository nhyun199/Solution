#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
	string B;
	int i = 1;

	while (1)
	{
		cin >> A >> B;

		if (A == "END" && B == "END")
			return 0;

		if (A.size() != B.size())
		{
			cout << "Case " << i << ": different\n";
			i++;
		}
		else
		{
			sort(A.begin(), A.end());
			sort(B.begin(), B.end());
			if (A == B)
			{
				cout << "Case " << i << ": same\n";
				i++;
			}
			else
			{
				cout << "Case " << i << ": different\n";
				i++;
			}
		}
	}
}