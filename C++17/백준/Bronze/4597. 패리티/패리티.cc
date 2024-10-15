#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (1)
	{
		string bit;
		int one = 0;
		
		cin >> bit;

		if (bit == "#")
			return 0;

		for (int i = bit.length() - 2; i >= 0; i--)
		{
			
			if (bit[i] == '1')
				one++;
			
		}

		if (one % 2 == 0)
		{
			if (bit[bit.length() - 1] == 'e')
			{
				bit[bit.length() - 1] = '0';
			}
			else
			{
				bit[bit.length() - 1] = '1';
			}
		}
		else
		{
			if (bit[bit.length() - 1] == 'e')
			{
				bit[bit.length() - 1] = '1';
			}
			else
			{
				bit[bit.length() - 1] = '0';
			}
		}
		cout << bit << '\n';
	}
}