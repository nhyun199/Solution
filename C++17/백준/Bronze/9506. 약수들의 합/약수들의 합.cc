#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	
	while (1)
	{
		cin >> n;
		
		if (n == -1)
			return 0;

		int sum = 0; 
		vector<int> divisor;
		
		for (int i = 1; i * i < n; i++)
		{
			if (n % i == 0)
			{
				divisor.push_back(i);
				sum += i;
				if (i != n / i && n / i != n)
				{
					divisor.push_back(n / i);
					sum += n / i;
				}
			}
		}

		if (sum == n)
		{
			sort(divisor.begin(), divisor.end());
			cout << n << " = ";
			for (int i = 0; i < divisor.size(); i++)
			{
				cout << divisor[i];
				if (i != divisor.size() - 1)
					cout << " + ";
			}
			cout << '\n';
		}
		else
			cout << n << " is NOT perfect.\n";
	}    
}