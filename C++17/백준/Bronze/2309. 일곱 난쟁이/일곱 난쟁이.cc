#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> height(9);
	int a = 0;
	int b = 0;
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		sum += height[i];
	}

	sort(height.begin(), height.end());

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i != j && (height[i] + height[j] == sum - 100))
			{
				a = i;
				b = j;
				break;
			}
		}
		if (a != 0 || b != 0)
			break;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i != a && i != b)
			cout << height[i] << '\n';
	}
}