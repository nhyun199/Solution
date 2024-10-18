#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (1)
	{
		string s; // a = 97 
		getline(cin, s);
		bool zero = false;

		if (s == "*")
			return 0;

		int alphabet[26] = { 0 };
		for (char ch : s)
		{
			if (ch == ' ')
				continue;

			alphabet[ch - 'a']++;
		}

		for (int i : alphabet)
		{
			if (i == 0)
				zero = true;
		}

		if (zero)
			cout << "N\n";
		else
			cout << "Y\n";
	}
}