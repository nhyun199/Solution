#include <iostream>
using namespace std;

int main()
{
    int n;
	long long a, b;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		long long multiple = a * b;

		while (b != 0)
		{
			long long temp = b;
			b = a % b;
			a = temp;
		}

		cout << multiple / a << '\n';
	}
}