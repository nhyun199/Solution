#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int gcd_three(int a, int b, int c)
{
	return gcd(gcd(a, b), c);
}

vector<int> cd(int gcd)
{
	int value = gcd;
	vector<int> cds;

	for (int i = 1; i * i <= value; i++)
	{
		if (value % i == 0)
		{
			cds.push_back(i);
			if (i != value / i)
			{
				cds.push_back(value / i);
			}
		}
	}
	return cds;
}

int main()
{
    int n;
	cin >> n;

	int a = 0, b = 0, c = 0;
	int value = 0;
	vector<int> cds;

	if (n == 2)
	{
		cin >> a >> b;
		value = gcd(a, b);
	}
	else
	{ 
		cin >> a >> b >> c;
		value = gcd_three(a, b, c);
	}

	cds = cd(value);

	sort(cds.begin(), cds.end());

	for (int i = 0; i < cds.size(); i++)
		cout << cds[i] << '\n';
}