#include <iostream>
using namespace std;

int main()
{
    int N;
	int i = 2;
	cin >> N;

	if (N == 1)
		return 0;

	while (N != 1)
	{
		if (N % i == 0)
		{
			cout << i << '\n';
			N /= i;
		}
		else
			i++;
	}
}