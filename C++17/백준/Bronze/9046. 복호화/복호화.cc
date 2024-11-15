#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	string password;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++)
	{
		int maxCount = 0;
		char maxChar;
		bool multiMax = false;
		unordered_set<char> s;
		getline(cin, password);
		
		for (int j = 0; j < password.size(); j++)
		{
			if (password[j] != ' ')
				s.insert(password[j]);
		}

		for (auto it = s.begin(); it != s.end(); it++)
		{
			int _count = count(password.begin(), password.end(), *it);

			if (_count > maxCount)
			{
				maxCount = _count;
				multiMax = false;
				maxChar = *it;
			}
			else if(_count == maxCount)
			{
				multiMax = true;
			}
		}

		if (multiMax)
			cout << "?\n";
		else
			cout << maxChar << endl;
	}    
}